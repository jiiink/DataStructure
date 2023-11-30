#-------------------------------------------------------------------------------


def addone(x):
   return(x+1)

def negative(x):
   return(-x)

la=[3, 5, 66, 12, 9, 13]

lb = list (map(addone, la))
print("lb=", lb)


lc = list (map( negative, la))
print("lc=", lc)