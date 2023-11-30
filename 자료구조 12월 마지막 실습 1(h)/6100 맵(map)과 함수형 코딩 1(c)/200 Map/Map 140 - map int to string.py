
import string

f1 = lambda x: str(x)
mylist = [11, 22, 33, 44, 55]

yourlist = list(map(  f1, mylist ))
print("My List=", mylist)
print("Your List=", yourlist)

x = { 1 : 110, 2 : 220, 3: 333 }

print(list(map( f1, [ x[i] for i in x ])))


