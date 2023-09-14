#include <bits/stdc++.h>
using namespace std;



int main() {

   string my , *spt, *ypt ;           ;
   vector <string> svec = { "K", "o", "r", "e", "a", "N" } ;
   vector <string *> psvec ;

   my = "Beer man" ;
   spt = &my ;
   cout << "my = " << my << endl ;
   cout << "*spt = " << *spt << endl ;

   ypt = &svec[0] ;
   cout << "*ypt[0]= " << *ypt << endl ;
   cout << "*ypt[1]= " << *(ypt+1) << endl ;
   cout << "*ypt[2]= " << *(ypt+2) << endl ;

} // end of main()
