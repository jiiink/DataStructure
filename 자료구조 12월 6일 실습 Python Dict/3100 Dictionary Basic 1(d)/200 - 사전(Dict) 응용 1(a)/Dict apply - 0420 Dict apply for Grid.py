
# 2차원 공간 (x,y) 좌표에 특정한 개체가 있음.
# 이것을 Dict[ ]를 이용해서 표현함.

Grid = {}

# Then you can do:
Grid[1,2] = "spider"
Grid[3,5] = "cake"
Grid[7,2] = "spider"
Grid[5,4] = "Tree"
print(Grid[1,2])

print(Grid)
print(Grid.get( (3,4), "No No"))

print(list(Grid.keys()))

for key, value in list(Grid.items()) :
    if value == "spider":
        print("=>>", key, " has a spider")