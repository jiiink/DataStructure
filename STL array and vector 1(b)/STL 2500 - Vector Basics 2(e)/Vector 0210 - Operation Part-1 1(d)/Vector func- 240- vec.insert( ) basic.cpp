#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

     cout << "\n 실험 : vector insert( ) \n" ;

     vector<string> vc1;
     for (int i=124; i<130 ; i++) {
            vc1.insert(vc1.begin(), to_string( i ) );
     }
     allout("개별 추가", vc1);

     vector <string> vc2;
     vc2.insert( vc2.begin(), 5, "메롱");
     allout("한꺼번에 10개 추가", vc2);

     cout << "\n vc2[]의 크기: " << vc2.size() ;


} // end of main( )
