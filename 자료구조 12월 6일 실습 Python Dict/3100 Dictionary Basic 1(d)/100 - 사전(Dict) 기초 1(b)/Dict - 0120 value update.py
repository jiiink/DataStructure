
Dic={}

Dic[3]= "Happy"
Dic[45]= {3, 4, 5, 6}
Dic[9] = list("Banana")

print(f"\n One ")
for w in Dic:
    print(f"key= {w}, value= {Dic[w]}")

print(f"\n Two ")
Dic[9].pop(0)
for w in Dic:
    print(f"key= {w}, value= {Dic[w]}")

print(f"\n Three ")
Dic.update( {3:"Cola", 32:"Good Boy"} )
for w in Dic:
    print(f"key= {w}, value= {Dic[w]}")
