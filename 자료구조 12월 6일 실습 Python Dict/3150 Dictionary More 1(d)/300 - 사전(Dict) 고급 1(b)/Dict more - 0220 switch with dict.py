

def numbers_to_strings(argument):
    switcher = {
        0: "뻥이요",
        1: "하나요",
        2: "둘",
        3: "석삼",
        4: "너구리",
    }
    return switcher.get(argument, "Error: nothing-")

print(numbers_to_strings(4))
print(numbers_to_strings(7))

# BOX
import collections
rvalue = collections.defaultdict(lambda : 'Error: 해당하는 숫자가 없음')

rvalue[0]="POINT"
rvalue[1]="LINE"
rvalue[2]="FACE"
rvalue[3]="NULL"


print( rvalue[3])
print( rvalue[7])