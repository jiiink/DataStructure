#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;



int main() {

    vector< vector <int> > devec { {3,4,5}, {32, 32, 33}, {45, 46},  \
                                {101, 102, 103,104}, {777, 778, 779}} ;


    allout( "devec[1] = ", *(devec.begin()+1) ) ;
    allout( "devec[ ] 끝원소 = ", *(devec.end()-1) ) ;
    allout( "devec[ ] 끝원소 = ", *(devec.rbegin( )) ) ;

    cout << "\n devec[0][0]= " << *(devec.begin()->begin()) ;
    cout << "\n devec[0][0]= " << devec[0][0]  ;
    cout << "\n devec[0][1]= " << *(devec.begin()->begin()+1) ;
    cout << "\n 마지막의 마지막 원소 = " << *((devec.end()-1)->end()-1) ;
    cout << "\n rbegin()를 사용이유, 마지막의 마지막 원소 = " << *((devec.rbegin())->rbegin()) ;
    cout << "\n 마지막의 첫 원소 = " << *( (devec.rbegin())->begin() ) ;
} // end of main()
