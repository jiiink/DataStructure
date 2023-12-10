
edict = {"One":"Ein", "Two":"Zwei","Three":"Drei","Four":"Vier","Five":"Funf"}


print("\n All keys\n")
for x in edict :
    print("key=", x)

print("\n All values\n")
for x in list(edict.values()) :
    print("values=", x)


print("\n keys and values \n")
for x in list(edict.keys()) :
    print("D[",x, "]=", edict[x])