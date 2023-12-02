/*
Use the vector::size() method: i < v.size().

The sizeof operator returns the size in bytes of the
object or expression at compile time,
which is constant for a std::vector.

*/
#include <bits/stdc++.h>
using namespace std;


int main() {
    array   <int,5>  iarr = { 2, 8, 7, 9, 10 };
	vector <string> sarr  = { "Going", "To", "NewYork"} ;
	vector <string> tarr  = {"Somebody PNU CE department VIVA VIVA! "} ;
	vector <string> uarr  ( 250, "Good") ; // 250개 공간에 good을 쳐넣는다고...

    auto la = end(iarr) - begin(iarr);
    auto lb = end(sarr) - begin(sarr);
    auto lc = end(tarr) - begin(tarr);
    auto lu = end(uarr) - begin(uarr);


    cout << " sizeof(iarr)): " <<  sizeof(iarr) << endl ;
    cout << " iarr.size():: " << iarr.size() << endl ;
    cout << " sizeof(sarr)): " << sizeof(sarr)<< endl ;
    cout << " sarr.size():: " << sarr.size() << endl ;
    cout << " sizeof(tarr)): " << sizeof(tarr)<< endl ;
    cout << " tarr.size():: " << tarr.size() << endl ;
    cout << " sizeof(uarr)): " << sizeof(uarr)<< endl ;
    cout << " uarr.size():: " << uarr.size() << endl ;
    cout << "\nla= " << la << "\nlb= " << lb << "\nlc = " << lc ;
    cout << "\nlu= " << lu ;


	return 0;
}

