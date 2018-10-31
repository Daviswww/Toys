su = 0
n = 0
i = 1
while(str(n) != '結束'):
    n = str(input('請輸入第 %d 位學生的成績：'%(i)));
    i += 1
    if(str(n) != '結束'):
        su += int(n)
print('本班總成績：', su,'分，平均成績：', su/(i-2),'分')