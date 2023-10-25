
mys = list("atttgcctgatttttacgaatcggggattag")
mys1 = list("atttgccgaatcggggattctgatttttaag");
mys2 = list("atgcaatgcaatgcaatgcaatgca");
mys3 = list("ttttttttaaaaaaaacccccccc") #  --> 처리 결과도 동일함.


# 이 함수롤 제대로 완성해야 합니다.

def make_dna( L ) :
    T = L[:]
    T.append('$');
    return( T ) ;



print( mys )

yours1 = make_dna( mys )
print( yours1 )
