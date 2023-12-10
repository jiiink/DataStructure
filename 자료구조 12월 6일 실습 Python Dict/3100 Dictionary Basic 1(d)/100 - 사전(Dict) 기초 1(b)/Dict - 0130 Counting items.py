
"""
사전은 뭔가 어떤 자료값을 기억 시키고 저장하는데
반드시 필요한 자료형이다. 다음은 어떤 동물의 DNA 서열인데
이 중에 3-mer (연속된 3개 문자)의 빈도를 모두 계산해보자.
"""

DNA = "acccggtcgagagagagacgattaattaatagattt"

def kmer( S, k ) :
    N = len(S)
    L=[]
    if N <= k :
        print( [S])
        return
    else :
        for i in range(N-k+1):
            x =  S[i:i+k]
            L.append( x )

    return(L)



X=kmer( DNA , 3)
print(X)

mydict={} # 빈 사전을 만듬

for w in X:
    if w not in mydict.keys() : # 사전에 없으면, 만들고 횟수를 1로 지정
        mydict[w]  = 1          # 0 -> 1
    else :                      # 사전에 있으면 +1 증가
        mydict[w] += 1


for w in mydict :
    print( f' key={w} , { mydict[w]}' )
