print('單字串')
s = set('亞運保齡球女子組3人賽勇奪牌，創下亞運保齡球代表團最佳成績')
print('Set : ', s)

s = ('亞運保齡球女子組3人賽勇奪牌，創下亞運保齡球代表團最佳成績')
print('Tuple to set: ', set(s))

s = ['亞運保齡球女子組3人賽勇奪牌，創下亞運保齡球代表團最佳成績']
print('List to tuple : ', set(s))
print('兩字串')
s1 = '亞運保齡球女子組3人賽勇奪牌'
s2 = '創下亞運保齡球代表團最佳成績'
print('Set : ', set(s1+s2))

s = ('亞運保齡球女子組3人賽勇奪牌', '創下亞運保齡球代表團最佳成績')
print('Tuple to set: ',set(s))

s = ['亞運保齡球女子組3人賽勇奪牌', '創下亞運保齡球代表團最佳成績']
print('List to tuple : ', set(s))