
class Employee:
    def __init__(self, empno, name):
        self.empno = empno
        self.name = name

    def __eq__(self, other):
        return self.empno == other.empno and self.name == other.name

    def __hash__(self):
        return hash((self.empno, self.name))


a = Employee(21, '김달수')
b = Employee(24, '박달수')
c = Employee(33, '공달수')
d = Employee(13, '공수달')

L = [a, b, c, d]

for w in L :
        print(f"Hash()= {hash(w)}")

