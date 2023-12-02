#include <bits/stdc++.h>
using namespace std;
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;


int main() {

     cout << "\n List를 sorting하여 이중 리스트의 뒤에 넣는다. " << endl ;

     list <string> lia = { "banana" , "apple", "tomato", "rose", "water", "peanut", "coffee"};
	 list <string> lib = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
	 list <string> lix = { "dog", "dragon", "pig", "horse" };
	 list <string> liy = { "dog1", "dragon", "pig", "horse" };
	 list <string> liz = { "dog",  "pig", "dragon", "horse" };
     list <string> lic = { "cat" , "dog", "tiger" } ;
     list <string> lid = { "banana" , "apple", "rose",};
     list < list<string>> llstr ;


     llstr.push_back( lia ) ;
     llstr.push_back( lib ) ;
     llstr.push_back( lic ) ;
     llstr.push_back( lix ) ;
     llstr.push_back( liy ) ;
     llstr.push_back( liz ) ;
     llstr.push_back( lid ) ;
     llstr.sort( ) ;

     // 이중 리스트가 정렬되었는지 봅세다.
     int count = 0 ;
     for(auto alist : llstr) {
        cout <<"\n list["<< ++count << "]= " ;
        for(auto astr: alist) {
            cout << " " << astr ;
        }
     }



} // end of main()





