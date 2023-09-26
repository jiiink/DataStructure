// 조환규 교수의 자료구조 2023

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


int main () {

        vector< int> PNU = { 11, 12, 13, 14, 15};
        array <int,7> Temp = {51, 52, 53, 54, 55, 56, 57} ;
        allout(" step 1=", PNU) ;

        PNU.reserve(20) ;
        allout(" step 2=", PNU) ; // reserve( )는 빈의자를 식당 밖에 준비함

        PNU[10]= -999 ;    // 헛손질, 식당 밖에 앉아봐야 손님이 안됨.,
        allout(" step 3=", PNU) ;
        cout << "\n PNU의 끝 원소=" << *(PNU.end()-1) ;

        PNU.assign( Temp.begin(), Temp.end()) ;
        allout(" step 4=", PNU) ;

        PNU[5]= 87654321 ;
        allout(" step 5=", PNU) ;

  return 0;
}