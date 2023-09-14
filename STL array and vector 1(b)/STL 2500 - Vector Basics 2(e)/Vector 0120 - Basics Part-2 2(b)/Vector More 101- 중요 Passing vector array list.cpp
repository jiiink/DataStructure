#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" : ";for(auto w:X)cout<<w<<", "
using namespace std;

template<typename T>
void add_val(T X) {
	for(auto &w: X) { w= w+1; }
	//allout("In add_val() X[]=", X);
}

template<typename T>
void add_ref(T &X) {
	for(auto &w: X) { w= w+1; }
	// allout("In add_ref() X[]=", X);
}

int main() {
    vector<int>     myvec  { 0,   1,  2,   3,  4, 5 };
    list  <int>     mylist { 10,  20, 30, 40, 50, 60};
    array <int, 6>  myarr  { -1,  -2, -3, -4, -5, -6} ;

    allout("After add_val( ) myvec[]= ", myvec);
    add_val( myvec ) ;
    allout("After add_val( ) myvec[]= ", myvec);

    add_ref( myvec) ;
    allout("After add_ref( ) myvec[]= ", myvec);
    add_ref( myvec) ;
    allout("After add_ref( ) myvec[]= ", myvec);

    add_ref( mylist );   add_ref( mylist );   add_ref( mylist );
    allout("After add_ref( ) mylist[]= ", mylist );
    return 0;
}

