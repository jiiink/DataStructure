#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> va ;
    vector <int> vb { 11, 22, 33, 44, 55, 66 };
    vector <double> vd ;
    list   <int> la ( { 9, 10, 11 } );
    set    <int> sa ;
    deque  <int> da ;
    stack  <int> ta ;
    queue  <int> qa ;

    cout << "\n sizeof(char)= "      << sizeof(char)   ;
    cout << "\n sizeof(string)= "    << sizeof(string)   ;
    cout << "\n sizeof(int)= "       << sizeof(int)  ;
    cout << "\n sizeof(long)= "      << sizeof(long)   ;
    cout << "\n sizeof(long long)= " << sizeof(long long)   ;
    cout << "\n sizeof(float)= "     << sizeof(float)   ;
    cout << "\n sizeof(double)= "    << sizeof(double) << endl  ;

    cout << "\n sizeof(va)= "  << sizeof(va) ;
    cout << "\n sizeof(la)= "  << sizeof(la) ;
    cout << "\n sizeof(vb)= "  << sizeof(vb) ;
    cout << "\n sizeof(vd)= "  << sizeof(vd) ;
    cout << "\n sizeof(va)= "  << sizeof(va) ;
    cout << "\n sizeof(la)= "  << sizeof(la) ;
    cout << "\n sizeof(da)= "  << sizeof(da) ;
    cout << "\n sizeof(ta)= "  << sizeof(la) ;
    cout << "\n sizeof(qa)= "  << sizeof(da)  << endl  ;

    cout << "\n va.size( )= "  << va.size( ) ;
    cout << "\n vb.size( )= "  << vb.size( ) ;
    cout << "\n vd.size( )= "  << vd.size( ) ;
    cout << "\n la.size( )= "  << la.size( ) ;
    cout << "\n sa.size( )= "  << sa.size( ) ;
    cout << "\n vd.size( )= "  << vd.size( ) ;
    cout << "\n ta.size( )= "  << ta.size( ) ;
    cout << "\n qa.size( )= "  << qa.size( ) ;

} // end of main( )
