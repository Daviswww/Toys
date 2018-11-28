S = {1,2,3,4,5,6,7,8,9,10}
A = {1,2,3,4,5}
B = {4,5,6,7,8}

print('A的補集合: ', S - A)
print('A和B的symmetric difference: ', A ^ B)
print('A和B的XOR: ', (A | B) - (A & B))
C1 = B ^ A
C2 = (A | B) - (A & B)
print('symmetric difference等於XOR”是真或假: ', C1 == C2)
print('5在(A和B的XOR)是真或假: ', 5 in C1)
K1 = S - (A | B)
K2 = (S - A) & (S - B)
print('(A 補集 B): ', K1)
print('(A 交集 B): ', K2)
print('(A 連集 B) = (A 交集 B): ', K1  == K2)

