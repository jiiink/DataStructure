#include <bits/stdc++.h>
using namespace std ;

int main () {

    const char* cstr = "Summer_Time_Killer";

    cout << "\n cstr= " << cstr ;

    array <char,30> charray, mystr ;
    memcpy ( charray.data(),cstr, 10);
    cout << "\n charray.data()= " << charray.data() << endl ;



  return 0;
}

