

def square(x):        return (x**2)
def cube(x)  :        return (x**3)

funcs = [square, cube]

for r in range(10):
    value = [x(r) for x in funcs]
    print(value)




