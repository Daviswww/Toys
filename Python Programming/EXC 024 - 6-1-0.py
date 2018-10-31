n = eval(input('計算A!:'))

sum = 1

for i in range(n):
    sum *= i+1
print( n, '! = ', sum)