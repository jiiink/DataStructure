
w = set([11,72,34,4,5,16, 9])

z = list(w)
z.sort()
print("z=",  z)
wstr = list(map(str, z)) # ' '.join(w)

qstr = ' '.join( wstr )
print(qstr, 0)


la=[4, 23, 56, 11, 87, 102]
la.sort()
qstr = ' '.join( map(str,wstr) )
print("qstr=", qstr)



sa=set([])
print("len(sa)=", len(sa))