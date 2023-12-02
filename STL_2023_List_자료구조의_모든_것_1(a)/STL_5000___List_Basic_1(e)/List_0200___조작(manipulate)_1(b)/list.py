La = [1, 2, 3]
Lb = La
print(f"{La=}, {Lb=}")
La.append(-9)
print(f"{La=}, {Lb=}")

Lb = La[:]
print(f"{La=}, {Lb=}")