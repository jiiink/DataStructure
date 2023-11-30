
f = lambda x,y : x + y

def g(x, y):
    return x + y


def w(function, *arguments):  # first class function
    return function(*arguments)


print( "w=", w(max, 1, 2, 4, 8, 16))

mout = (map(abs, [-2, -1, 0, 1, 2]))
print("list(mout)=", list(mout))
