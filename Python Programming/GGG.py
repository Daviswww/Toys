from __future__ import print_function
import argparse
import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim
from torchvision import datasets, transforms
import matplotlib.pyplot as plt

class Net(nn.Module):
    def __init__(self):
         super(Net, self).__init__()
         self.con1 = nn.Sequential(
                         nn.Conv2d(1, 6, kernel_size = 5, padding = 2),# 
                         nn.ReLU(),
                         nn.MaxPool2d(2)
                         )
         self.con2 = nn.Sequential(
                         nn.Conv2d(6, 16, kernel_size = 5),
                         nn.ReLU(),
                         nn.MaxPool2d(2)
                         )
         self.fc1 = nn.Sequential(
                         nn.Linear(16 * 5 * 5, 120),
                         nn.ReLU()
                         )
         self.fc2 = nn.Sequential(
                         nn.Linear(120, 84),
                         nn.ReLU()
                         )
         self.fc3 = nn.Linear(84, 10)
    
    def forward(self, x):
        x = self.con1(x)
        x = self.con2(x)
        x = x.view(-1, self.num_flat_features(x))
        x = self.fc1(x)
        x = self.fc2(x)
        x = self.fc3(x)
        return F.log_softmax(x, dim=1), x

    def num_flat_features(self, x):
        size = x.size()[1:]  # all dimensions except the batch dimension
        num_features = 1
        for s in size:
            num_features *= s
        return num_features

def train(args, model, device, train_loader, optimizer, epoch):
    model.train()
    for batch_idx, (data, target) in enumerate(train_loader):
        data, target = data.to(device), target.to(device)
        optimizer.zero_grad()
        output , last_layer= model(data)
        loss = F.nll_loss(output, target) #negative log likelihood loss
        loss.backward()
        optimizer.step()
#        if batch_idx % args.log_interval == 0:
#            print('Train Epoch: {} [{}/{} ({:.0f}%)]\tLoss: {:.6f}'.format(
#                epoch, batch_idx * len(data), len(train_loader.dataset),
#                100. * batch_idx / len(train_loader), loss.item()))
        

def test(args, model, device, test_loader, epoch):
#    import random
#    try: from sklearn.manifold import TSNE; HAS_SK = True
#    except: HAS_SK = False; print('Please install sklearn for layer visualization')
#    k = random.randrange(0,(len(test_loader.dataset.test_labels) / test_loader.batch_size))    
    model.eval()
    test_loss = 0
    correct = 0

    with torch.no_grad():
        for i, (data, target) in enumerate(test_loader):
            data, target = data.to(device), target.to(device)
            output , last_layer = model(data)
            test_loss += F.nll_loss(output, target, reduction='sum').item() # sum up batch loss
            pred = output.max(1, keepdim=True)[1] # get the index of the max log-probability
            correct += pred.eq(target.view_as(pred)).sum().item()
#            if i == k:
#                if HAS_SK:
#                    tsne = TSNE(perplexity=30, n_components=2, init='pca', n_iter=5000)
#                    plot_only = 500
#                    low_dim_embs = tsne.fit_transform(last_layer.data.cpu().numpy()[:plot_only, :])
#                    labels = target.data.cpu().numpy()[:plot_only]
#                    plot_with_labels(low_dim_embs, labels)
    test_loss /= len(test_loader.dataset)
    print('\nTest set {}: Average loss: {:.4f}, Accuracy: {}/{} ({:.0f}%)\n'.format(
        epoch, test_loss, correct, len(test_loader.dataset),
        100. * correct / len(test_loader.dataset)))   
        
def plot_with_labels(lowDWeights, labels):
    from matplotlib import cm
    plt.cla()
    X, Y = lowDWeights[:, 0], lowDWeights[:, 1]
    for x, y, s in zip(X, Y, labels):
        c = cm.rainbow(int(255 * s / 9)); plt.text(x, y, s, backgroundcolor=c, fontsize=9)
    plt.xlim(X.min(), X.max()); plt.ylim(Y.min(), Y.max()); plt.title('Visualize last layer'); plt.show(); plt.pause(0.01)
    
def main():
    # Training settings
    parser = argparse.ArgumentParser(description='PyTorch MNIST Example')
    parser.add_argument('--batch_size', type=int, default=640, metavar='N',
                        help='input batch size for training (default: 2000)')
    parser.add_argument('--test_batch_size', type=int, default=2000, metavar='N',
                        help='input batch size for testing (default: 2000)')
    parser.add_argument('--epochs', type=int, default=5, metavar='N',
                        help='number of epochs to train (default: 10)')
    parser.add_argument('--lr', type=float, default=0.01, metavar='LR',
                        help='learning rate (default: 0.01)')
    parser.add_argument('--momentum', type=float, default=0.5, metavar='M',
                        help='SGD momentum (default: 0.5)')
    parser.add_argument('--no_cuda', action='store_true', default=False,
                        help='disables CUDA training')
    parser.add_argument('--seed', type=int, default=1, metavar='S',
                        help='random seed (default: 1)')
    parser.add_argument('--log_interval', type=int, default=10, metavar='N',
                        help='how many batches to wait before logging training status')
    args = parser.parse_args()
    
    use_cuda = not args.no_cuda and torch.cuda.is_available()

    torch.manual_seed(args.seed)

    device = torch.device("cuda" if use_cuda else "cpu")

    kwargs = {'num_workers': 5, 'pin_memory': True} if use_cuda else {}
    train_loader = torch.utils.data.DataLoader(
        datasets.MNIST('../data', train=True, download=True,
                       transform=transforms.Compose([
                           transforms.ToTensor(),
                           transforms.Normalize((0.1307,), (0.3081,))
                       ])),
        batch_size=args.batch_size, shuffle=True, **kwargs)
    test_loader = torch.utils.data.DataLoader(
        datasets.MNIST('../data', train=False, transform=transforms.Compose([
                           transforms.ToTensor(),
                           transforms.Normalize((0.1307,), (0.3081,))
                       ])),
        batch_size = args.test_batch_size, shuffle=True, **kwargs)

    #model = torch.load('net1.pkl')
    model = Net().to(device)
    optimizer = optim.SGD(model.parameters(), lr=args.lr, momentum=args.momentum) 
    plt.ion()
    for epoch in range(1, args.epochs + 1):
        train(args, model, device, train_loader, optimizer, epoch)
        test(args, model, device, test_loader, epoch)
        #torch.save(model, 'net1.pkl')
    plt.ioff()
    
if __name__ == '__main__':
    main()
    
