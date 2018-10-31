n = eval(input('請輸入年分:'))
print(n , 'is',(n % 4 == 0) and (n % 100 != 0) or (n % 400 == 0))
