

# Returns the key value available in the dictionary and if given key is not
# available then it will return provided default value.

dict = {'Name': 'Zara', 'Age': 7, 'Book':"PNU!"}
print('Age=', dict.setdefault('Age', None))
print('Sex=', dict.setdefault('Sex', None))
print('Book', dict.setdefault('Book', 'we do not find this'))