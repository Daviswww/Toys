list2 = [5, 6, 7, 8]
print('(1):')
list1 = [1, 2, 3, 4]
list1.append(list2)
print("Append: ", list1)

list1 = [1, 2, 3, 4]
list1.extend(list2)
print('Extend', list1)

print('(2):')
list2 = ['t', 'e', 's', 't']
list1 = [1, 2, 3, 4]
list1.append(list2)
print("Append: ", list1)

list1 = [1, 2, 3, 4]
list1.extend('test')
print("Extend: ", list1)

print('(3):')
list2 = ['a', 'b', 'c']
list1 = [1, 2, 3, 4]
list1.append(list2)
print("Append: ", list1)

list1 = [1, 2, 3, 4]
list1.extend(list2)
print("Extend: ", list1)

print('(4):')
list2 = ['阿貓', '阿狗']
list1 = [1, 2, 3, 4]
list1.append(list2)
print("Append: ", list1)

list1 = [1, 2, 3, 4]
list1.extend(list2)
print("Extend: ", list1)

print('(5):')
list1 = [1, 2, 3, 4]
list1.append(0)
print("Append: ", list1)

list1 = [1, 2, 3, 4]
list1.extend(0)
print("Extend: ", list1)
