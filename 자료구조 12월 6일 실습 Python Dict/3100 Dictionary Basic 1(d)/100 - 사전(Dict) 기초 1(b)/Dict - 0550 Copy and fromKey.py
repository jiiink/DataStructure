
dict1 = {'Name': 'Zara', 'Age': 7};
dict2 = dict1.copy()
print("New Dictionary 1: %s" %  str(dict2))

seq = ('name', 'age', 'sex')
dict = dict.fromkeys(seq)
print("New Dictionary 2: %s" %  str(dict))

dict = dict.fromkeys(seq, 10)
print("New Dictionary 3: %s" %  str(dict))