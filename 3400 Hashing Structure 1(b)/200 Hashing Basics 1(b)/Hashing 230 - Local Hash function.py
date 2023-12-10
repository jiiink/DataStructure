#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import time

class Obj:
    def __init__(self,x):
        self.x = x

    def getx( self ) :
        return( self.x )

    def __eq__(self, other):
        return( self.x == other.getx() )

    def __hash__(self):
        return(0)

    def __lt__( self, other):
        return ( self.x < other.getx() )

sz = 1000

for tc in range(1,5):
    dic = {}
    s = time.time_ns( )
    for i in range( sz ) :
        myo = Obj(i)    # 객체를 만듬
        dic[ myo ]= i   # 직접 __hash__ () 함수로 위치를 구함.

    e = time.time_ns( )
    sz *= 2
    print(f'{sz} =  {(e-s)/10**7}')

