#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

     vector <int>  Lv = { 16, 7, 9, 9, 9, 17, 20, 20, 5, 20, 19, 16, 17} ;

     auto itr = Lv.begin() ;

     allout("0. Lv[]= ", Lv ) ;
     itr = unique(Lv.begin(), Lv.end() ); // 중요!!!! 실제 그 끝은 itr임.
     Lv.resize( itr - Lv.begin()) ;
     allout("1. Lv[]= ", Lv ) ;

     sort  (Lv.begin(), Lv.end() );
     allout("2. Lv[]= ", Lv ) ;

     itr = unique(Lv.begin(), Lv.end() ); // 중요!!!! 실제 그 끝은 itr임.
     Lv.resize( itr - Lv.begin()) ;
     allout("3. Lv[]= ", Lv ) ;



} // end of main()


