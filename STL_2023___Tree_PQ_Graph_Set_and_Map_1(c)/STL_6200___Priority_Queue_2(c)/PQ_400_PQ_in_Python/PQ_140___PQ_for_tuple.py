import queue as Q

q = Q.PriorityQueue()
q.put((15,'십오야둥근달'))
q.put((37,'오'))
q.put((57,'오'))
q.put((414,'십사'))
q.put((36,'123'))
q.put((36,'345'))
q.put((36,'67'))
q.put((100,'다섯이오'))
q.put((29,'구구구국'))
q.put((334,'삼삼'))
q.put((36,'154'))
q.put((36,'45'))
q.put((100,'하나요'))

i=1
while not q.empty():
    This = q.get()
    print(f' 순서 i={i:3}  Value= {This[0]:3} ,{This[1]}' )
    i+=1
