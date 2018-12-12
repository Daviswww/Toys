def add(a, b):
    return a + b

def sub(a, b):
    return a - b

def mul(a, b):
    return a * b

def div(a, b):
    if(b == 0):
        return '所輸入的除數是0，無法計算相除。'
    else:
        return a / b
    
print('加法: ', end = " ")
a = eval(input('A:'))
b = eval(input('B:'))
print('A + B = ', add(a, b))

print('減法: ', end = " ")
a = eval(input('A:'))
b = eval(input('B:'))
print('A - B = ', sub(a, b))

print('乘法: ', end = " ")
a = eval(input('A:'))
b = eval(input('B:'))
print('A * B = ', mul(a, b))

print('除法: ', end = " ")
a = eval(input('A:'))
b = eval(input('B:'))
print('A / B = ', div(a, b))

print('除法(除數為0): ', end = " ")
a = eval(input('A:'))
b = eval(input('B:'))
print('A / B = ', div(a, b))
