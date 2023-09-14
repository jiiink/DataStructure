#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector  <string> food { "»§", "¶±", "²Ç", "¹ä", "¼ú", "¹°", "¶Ë" };

 auto it = find( food.begin(), food.end(), "¹ä" ) ;
 cout << "*it = " << *it << endl ;
 cout << " À§Ä¡ = [" << it-food.begin() << "] ¹øÂ° " << endl ;

 it = find( food.begin(), food.end(), "Â¯Â¯¸Ç" ) ;
 if( it == food.end() ) cout << "find()·Î Ã£À¸·Á´Â ¿ø¼Ò°¡ ¾ø½À´Ï´Ù.";
 else {
     cout << "*it = " << *it << endl ;
     cout << " À§Ä¡ = [" << it-food.begin() << "] ¹øÂ° " << endl ;
 }

} // end of main()

