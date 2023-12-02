#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<"\n";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {

    array<int, 5> arr1 = { 11, 12, 13, 14, 15 };
    array<int, 5> my ;
    int you[5] ;

    cout << "t1. " << arr1.at(2) << endl;
    cout << "t2. " <<arr1[2] << endl;  // C-style
    cout << "t3. " <<arr1.front() << endl;
    cout << "t4. " <<arr1.back() << endl;

    int* pData = arr1.data();
    cout << "t5. " <<pData[3] << endl;

    allout("초기화 안했을 때 my ", my ) ;
    allout("초기화 안했을 때 you", you ) ;

    cout << "\n at(0)= " << my.at(0) << endl;
    cout << "\n my[0]= " << my[0] << endl;
    return 0;
}


