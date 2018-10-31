x = 1
i = 0
while(x < 100000):
    i += 1
    x *= i
print('While: ', i,'! 滿足 > 100000 = ', x)

x = 1
for i in range(1, 1000):
    x *= i
    if(x > 100000):
        print('For: ', i,'! 滿足 > 100000 = ', x)
        break