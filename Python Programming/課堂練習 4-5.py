print('指令法:')
a = '姓名：%s\n年齡：%d\n性別：%s\n'
print(a%('班代', 22, 'male'))

print('插秧法:')
b ='姓名：{}\n年齡：{}\n性別：{}\n'
print(b.format('班代', 22, 'male'))

print('名稱法:')
c ='姓名：{q}\n年齡：{w}\n性別：{e}\n'
print(c.format(q = '班代', w = 22, e = 'male'))

print('排序法:')
d ='姓名：{0}\n年齡：{1}\n性別：{2}\n'
print(d.format('班代', 22, 'male'))
