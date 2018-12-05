import random

def random_array(n):
    a =[]
    for i in range(n):
        r = random.randint(1, n)
        while (r in a):
            r = random.randint(1, n)
        a.append(r)
    return a

def even_random_array(n):
    a = random_array(n)
    for i in range(len(a)):
        a[i] *= 2
    return a

def odd_random_array(n):
    a = random_array(n)
    for i in range(len(a)):
        a[i] = a[i] * 2 - 1
    return a

n = int(input("Enter n : "))
a = random_array(n)
print(a)
a = even_random_array(n)
print(a)
a = odd_random_array(n)
print(a)
