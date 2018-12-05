fruits = {'西瓜':15, '香蕉':20, '水蜜桃':25, '蘋果':18}
fruitsn = dict({'西瓜':15, '香蕉':20, '水蜜桃':25, '蘋果':18})
print(fruits)
print(fruitsn)
fin = input('輸入水果名稱')

if(fin in fruits):
    print(fin, "一斤 = ", fruits[fin], "元")
else:
    print('抱歉！沒有販賣~', fin ,'~這種水果')