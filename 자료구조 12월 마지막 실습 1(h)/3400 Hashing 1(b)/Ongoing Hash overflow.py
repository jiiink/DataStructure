#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho https://velog.io/@boram_in/%EA%B3%A0%EA%B8%89-%ED%83%90%EC%83%89-%EA%B5%AC%EC%A1%B0-%ED%95%B4%EC%8B%B1
# Created:     2021-12-07
#-------------------------------------------------------------------------------

def hashFn(key):
   sum = 0
   for c in key:
       sum = sum + ord(c) #아스키 코드 값을 sum에 더함
   return sum % M

# 순차탐색 맵과 체이닝을 이용한 해시 맵
# 멥은 엔츠리의 집합이므로 엔트리 클래스가 필요하며
# 엔트리에는 키와 값이 필요하다.

class Entry:
    def __init__(self, key, value):
        self.key = key
        self.value = value

    def __str__(self):
        return str("%s: %s" % (self.key, self.value))

# 순차탐색 맵 sequential map을 구현해보자.
# 데이터 멤버로 엔트리를 저장할 테이블이 필요하다.

class SequentialMap:                       #순차탐색 맵
    def __init__(self):
        self.table = []                    #맵의 레코드 테이블

    def size(self): return len(self.table) #레코드의 개수
    def display(self, msg):
        print(msg)
        for entry in self.table:            # 테이블의 모든 엔트리에 대해서
            print(" ", entry)               #출력(연산자 중복함수 사용)

# 삽입연산을 해보자.
# 리스트가 정렬되이 있지 않기에 어디에나 넣을 수 있지만
# 제일 뒤에 넣는 것이 가장 효율적이다.

    def insert(self, key, value):           #삽입 연산
        self.table.append(Entry(key, value))# 리스트 맨 뒤에 추가

    def search(self,key):
        pos = sequential_search(self.table, key, 0, self.size()-1)
        if pos is not None : return self.table[pos]
        else : return None

# 삭제할 레코드의 위치를 찾아야 한다.
# 위치를 알면 파이썬 리스트의 pop함수를 이용해 제거한다.(O(n))


    def delete(self, key):                 #삭제연산: 항목 위치를 찾아서 pop
        for i in range(self.size()):
            if self.table[i].key == key:   #삭제할 위치를 먼저 찾고
                self.table.pop(i)          # 리스트의 pop으로 삭제
                return