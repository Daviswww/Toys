import random
ans = random.randrange(-100,100)
i = 1
while(True):
    str1 = "第" + str(i) + "次猜測的數值: "
    g = eval(input(str1))
    if(g > ans):
        print('答錯，數字太大')
    elif(g < ans):
        print('答錯，數字太小')
    else:
        print('恭喜猜對了！共猜了', i,'次。')
        break;
    i+=1