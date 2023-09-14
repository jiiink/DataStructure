#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "

int main() {
     vector<int> vi {91, 92, 93, 94, 95, 96, 97 };
     cout << "\n front( ) and back( ), " << vi.front( ) << ", " << vi.back() ;

     allout("\n 원래 vi[] = ", vi ) ;
     vi.clear() ;

     allout("\n clear( ) 후 vi[] = ", vi ) ;
     cout << "\n vi.size()= " << vi.size() ;
     cout << "\n front( ) and back( ), " << vi.front( ) << ", " << vi.back() ;

     // vec.clear( )는 각 항목의 내용을 진짜로 지우는 것이 아니라
     // vector iterator만 정리는 작업을 한다. 크기에 상관없이 그 시간은 O(1).

     cout << "\n 전체 내용을 range-based loop으로 찍어보자 << \n" ;
     for(auto w : vi){
          cout << "\n vi[] w = " << w ;
     }
     cout << "\n vi[] ------------------- \n" ;

     cout << "\n vi[2] =" << vi[2] ;
     cout << "\n vi[3] =" << vi.at(3) ; // 정상적인 오류가 발생함.
     cout << "\n vi[4] =" << vi[4] ;



} // end of main( )



