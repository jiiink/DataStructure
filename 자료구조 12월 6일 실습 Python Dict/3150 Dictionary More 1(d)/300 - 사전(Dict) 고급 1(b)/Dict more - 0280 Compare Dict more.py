
""" This method returns 0 if both dictionaries are equal,
  -1 if dict1 < dict2 and
   1 if dict1 > dic2.
"""

dict1 = {'Name': 'Zara',   'Age':  7};      # dict 4와 같음
dict2 = {'Name': 'Mahnaz', 'Age': 27};
dict3 = {'Name': 'Abid',   'Age': 27};
dict4 = {'Name': 'Zara',   'Age':  7};

print("Return Value : %d" %  cmp (dict1, dict2))
print("Return Value : %d" %  cmp (dict2, dict3))
print("Return Value : %d" %  cmp (dict1, dict4))