
la= list(range(-5,5))
print(la)
lb = list( filter((lambda x: x < 0), list(range(-5,5))))


print("Filtering 후 ", lb)


lc = [ x for x in la if x%3== 0 ]
print(lc)


a = [1,2,3,5,7,9]
b = [2,3,5,6,7,8]
print("동시 출현 원소 :", [x for x in b if x in a])  # prints out [2, 3, 5, 7]


