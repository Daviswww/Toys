
A = [89, 56, 92 ,79, 51]
B = [70, 86, 77, 83, '缺考']
C = [0, 0, 0, 0, 0]
D = [0, 0, 0, 0, 0]
print('期中考缺考: ')
for i in range(5):
    if(A[i] =='缺考'):
        print(i,'號缺考')

print('\n期末考缺考: ')
for i in range(5):
    if(B[i] =='缺考'):
        print(i,'號缺考')
        
print('\n平均分數: ')
for i in range(5):
    if(A[i] == '缺考' or B[i] == '缺考'):
        if(A[i] == '缺考'):
            C[i] = B[i] / 2
        elif(B[i] == '缺考'):
            C[i] = A[i] / 2
        else:
            C[i] = 0
        print('第',i,'號\t期中考:', A[i], '\t期末考:',B[i], '\t平均:', C[i])
    else:
        C[i] = (A[i] + B[i]) / 2
        if(C[i] > 100):
            C[i] = 100
        print('第',i,'號\t期中考:', A[i], '\t期末考:',B[i], '\t平均:', C[i])
print(C.index(max(C[0:5])),'號學期成績最高分',max(C[0:5]))
print(C.index(min(C[0:5])),'號學期成績最低分',min(C[0:5]))

print('\n條分後平均分數: ')
for i in range(5):
    if(A[i] == '缺考' or B[i] == '缺考'):
        if(A[i] == '缺考'):
            D[i] = ((B[i]*1.5)) / (1 + 1.5)
        elif(B[i] == '缺考'):
            D[i] = ((A[i])) / (1 + 1.5)
        else:
            D[i] = 0
        print('第',i,'號\t期中考:', A[i], '\t期末考:',B[i], '\t平均:', D[i])
    else:
        D[i] = (A[i] + (B[i]*1.5)) / (1 + 1.5)
        if(D[i] > 100):
            D[i] = 100
        print('第',i,'號\t期中考:', A[i], '\t期末考:',B[i], '\t平均:', D[i])
print(D.index(max(D[0:5])),'號學期成績最高分',max(D[0:5]))
print(D.index(min(D[0:5])),'號學期成績最低分',min(D[0:5]))