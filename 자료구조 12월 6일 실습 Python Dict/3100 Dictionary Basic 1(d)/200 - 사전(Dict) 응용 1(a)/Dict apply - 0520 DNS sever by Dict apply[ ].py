#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-05-17
#-------------------------------------------------------------------------------

import collections
DNS = collections.defaultdict(lambda : '\n Site Not Found: 주소를 다시 확인 요망')


while( True ):


    DNS["www.naver.com"  ]= "165.345.067.234"
    DNS["www.youtube.com"]= "565.045.009.125"
    DNS["www.daum.com"   ]= "256.067.234"
    DNS["www.hgcho.cool" ]= "099.055.067.234"


    web= input("원하는 주소를 입력:")
    if web == "END" :
        break
    print(f" 여러분의 {web}의 인터넷 주소는 {DNS[web]}")
