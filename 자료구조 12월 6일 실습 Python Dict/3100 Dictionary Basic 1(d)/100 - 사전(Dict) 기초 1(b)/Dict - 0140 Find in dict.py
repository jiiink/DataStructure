
mydic={ 1:"One", 2:"Two", 3:"Three", 4:"Four", 5:"Five", 6:"Six" }
mydic[10]="Ten"

kodic= { "1":"하나", "2":"둘", "3":"세", "4":"넷", "5":"다섯", "6":"여섯"}
Eng_Kor= { "one":"하나", "two":"둘", "three":"세", "four":"넷", "five":"다섯"}
L = {3, 3, 4, 1, 10, 8, 9, 6, 5}  # 집합

for w in L :
    print("w=",w, end=": ")
    if w in list(mydic.keys()):
        print(w, mydic[w])
    else :
        print(w, "is not defined")


kt="우리가 4 명이면 3 명보다 사람이 많으니 1 명은 미팅에 오지 못하겠네"

for w in kt.split() :
    if  w in list(kodic.keys()) :
        print( kodic[w], end=" " )
    else :
        print(w, end=" ")


mydic[7]="seven"
