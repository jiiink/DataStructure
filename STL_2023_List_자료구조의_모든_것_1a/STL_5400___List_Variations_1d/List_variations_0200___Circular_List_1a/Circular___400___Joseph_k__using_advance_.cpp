#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main(){

     list<int> people(16) ;
     int jump = 3 ;  // 건너뛰는 jump의 칸의 수를 조절 함.

     iota( people.begin(), people.end(), 1 ) ; // 1부터 11까지 순차적으로 채움
     mout("시작전 []=", people ) ;

     auto here = people.begin() ;

     while( people.size() >= 2) {
         // cout << "\n people.size( )=" << people.size() ;
         for(int i=1 ; i <= jump ; i++){
             here++ ;
             if( here == people.end() ) {
                    cout << " *end" ;
                    here = people.begin() ;
                    i-- ; // 한 칸 뒤로 물림.
             }
         }

         cout << "\n *here = " << *here ;

         here = people.erase( here ) ;
         if( here != people.end()) here--;  // 조심하자. !
         mout("\n 현재의 people[] =", people ) ;

     } // end of while()
     cout << "\n Final One ==> " << people.front()  ;

} // end of main()
