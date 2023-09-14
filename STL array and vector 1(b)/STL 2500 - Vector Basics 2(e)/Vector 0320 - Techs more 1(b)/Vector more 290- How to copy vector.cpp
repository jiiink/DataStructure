#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {

    vector<int> v1 = { 1, 5, 7, 3, 8, 3 };

    vector<int> v2(6);
    vector<int> v3(6);

	allout("v1[]= ", v1) ;
	allout("v2[]= ", v2) ;
	allout("v3[]= ", v3) ;

    copy  (v1.begin(), v1.begin()+3, v2.begin());
    copy_n(v1.begin(), 4,            v3.begin());

	allout("After v1[]= ", v1) ;
	allout("After v2[]= ", v2) ;
	allout("After v3[]= ", v3) ;


}
