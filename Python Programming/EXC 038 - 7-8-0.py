s1 = {1, 2, 3}
s2 = {2, 3, 4}
s3 = {'a', 'b', 'c'}
print("type(s1):", type(s1), "type(s3):", type(s3))
st1 = sorted(s1)
st2 = sorted(s3)
print("s1: ", st1, type(st1), "s3:", st2, type(st2))

#print(st1-st2)     #Error
s4 = frozenset({1, 2, 3})
print("轉換結果:", s4, "type(s4)", type(s4))
print(s1-s4, type(s1), type(s4))
print(s4-s1, type(s4), type(s1))
