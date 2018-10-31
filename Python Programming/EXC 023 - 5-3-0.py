import random

n = random.randrange(1, 100)
x = n
if(x % 2 == 1):
    if(x > 40):
        x -= 40
    else:
        x *= 1.5
else:
    if(x > 70):
        x -=20
    else:
        x /= 10
print('原本數值: %d 轉換後: %d'%(n, x))
    