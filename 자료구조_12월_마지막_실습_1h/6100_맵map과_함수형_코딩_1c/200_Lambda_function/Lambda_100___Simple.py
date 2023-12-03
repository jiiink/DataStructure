
add10 = lambda x : x + 10

def fun_add10(x):
    return(x+10)


print( add10(9))
print( fun_add10(9))

sqr = lambda x,y : x**2 + y**2

what = sqr(3,4)
print(what)

ps = [ (2,3), (5,1), (8,2), (9,3), (0,10), (5,2)]

sps1 = sorted( ps)

def take2(x):
    return(x[1])

sps2 = sorted( ps, key=lambda x : x[1])
sps3 = sorted( ps, key=take2)
print("\n sp1[]=\n", sps1)
print("\n sp2[]=\n",sps2)
print("\n sp3[]=\n",sps3)