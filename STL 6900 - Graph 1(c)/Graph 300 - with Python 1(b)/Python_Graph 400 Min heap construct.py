# Heap, priority Queue를 만들어 보기

class Heap:
    def __init__(self):
        self.heap = [0]
        self.size = 0

    def float(self, k):   # Heap merging 위로 올라감. adjusting을 해가면서.
        while k // 2 > 0:
            if self.heap[k] < self.heap[k//2]:
                self.heap[k], self.heap[k//2] = self.heap[k//2], self.heap[k]
            k //= 2


    def insert(self, item):
        self.heap.append(item)
        self.size += 1
        self.float(self.size)

    def sink(self, k):
        while k * 2 <= self.size:
            mc = self.minchild(k)
            if self.heap[k] > self.heap[mc]:
                self.heap[k], self.heap[mc] = self.heap[mc], self.heap[k]
            k = mc

    def minchild(self, k):
        if k * 2 + 1 > self.size:
            return k * 2
        elif self.heap[k*2] < self.heap[k*2+1]:
            return k * 2
        else:
            return k * 2 + 1

    def pop(self):
        item = self.heap[1]
        self.heap[1] = self.heap[self.size]
        self.size -= 1
        self.heap.pop()
        self.sink(1)
        return item

h = Heap()
data_list = [ 4, 8, 7, 2, 9, 10, 5, 1, 3, 6]

for i in data_list :
    h.insert(i)

print("h.heap=", h.heap)

for i in range( len(data_list )):
    n = h.pop()
    print("\n Removed=", n, ",  Heap:", end=" ")
    print(h.heap)
