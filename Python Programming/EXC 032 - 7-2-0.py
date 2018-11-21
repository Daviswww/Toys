list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
list2 = []
list3 = []

print('(1):')
j = 9
for i in range(10):
    list2.insert(i, list1[j])
    print('insert: ', list1[j], 'list2 = ', list2)
    j-=1
    
print('(2):')
i = 9
while(i >= 0):
    if(list1[i] % 2 == 1):
        print('pop: ', list1.pop(i), ' list1 = ', list1) 
    i-=1
    
print('(3):')
i = 0
j = 0
while(i < len(list1)):
    if(list1[i] > 6):
        list3.insert(j, list1[i])
        j+=1
        print('list3 = ', list3)
    i+=1