def sum(n):
    sum = 1
    i = 1
    while(i <= n):
        sum *= i
        i += 1
    return sum

n = eval(input('輸入欲計算的階乘: '))
print(n ,'! =', sum (n))