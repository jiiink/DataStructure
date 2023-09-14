#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {


    vector<int> v1 = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
    vector<int> v2(6);
    vector<int> v3(6);

    copy_if(v1.begin(), v1.end(), v2.begin(), [](int i) {
        return i%2!=0; // 홀수면 복사하세요.
    });

    allout("v1[]= ", v1) ;
    allout("v2[]= ", v2) ;
    allout("v3[]= ", v3) ;

    copy_backward(v1.begin()+3, v1.begin() + 7, v3.begin()+ 5);


    allout("after copy_backword( ), \nv3[]= ", v3) ;

}
