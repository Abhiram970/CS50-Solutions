s1,s2 = input(),input()
l1,l2 = [],[]
for i in s1:
    l1.append(ord(i))
for j in s2:
    l2.append(ord(j))
l3 = []
for i in range(len(l1)):
    l3.append(abs(l1[i]-l2[i]))
for i in range(len(l3)):
    l3[i] += l2[i]
print(l3)
l4 = []
for i in l3:
    if i >= 65 and i <= 90:
        l4.append(chr(i))
    if i > 90:
        xx = i-91
        oo = 65+xx
        l4.append(chr(oo))
print(l4) 