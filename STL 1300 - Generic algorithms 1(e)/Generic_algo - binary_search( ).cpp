// is_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::is_permutation
#include <array>        // std::array
#include <vector>

using namespace std;

int main(){


    int a[10] = { 17, 25, 67, 84, 90, 30, 55, 6, 9, 28};
    vector <int> va = {17, 25, 67, 84, 90, 30, 55, 6, 9, 28};

    sort(          a , a+10     ) ;
    sort( va.begin() , va.end() ) ;

    int w ;
    w = binary_search( va.begin(), va.end(), 55) ;
    cout << "w= " << w ;
    cout << "값 55: ";

    if( binary_search(a, a+10, 55)) cout << "찾았습니다." << endl;
    else cout << "찾지 못했습니다." << endl;


    cout << "값 80: 을 이진탐색으로 찾아보자.  ";
    if(binary_search(a, a+10, 80)) cout << "찾았습니다." << endl;
    else cout << "찾지 못했습니다." << endl;



return 0;

}
