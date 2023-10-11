#include <bits/stdc++.h>
using namespace std;

int main() {

    vector <string> menu ;
    vector <string>::iterator miter ;
    list   < vector <string> > myl ;
    list   < vector <string> >::iterator iter ;


    menu.push_back("Cola" ) ; menu.push_back("Cider") ; menu.push_back("Milk" ) ;
    myl.push_front( menu ) ;

    menu.clear() ;
    menu.push_back("Beer") ; menu.push_back("Soju") ;
    menu.push_back("Wine") ; menu.push_back("Wine") ;
    myl.push_back( menu ) ;

    menu.clear() ;
    menu.push_back("Â¥Àå¸é") ; menu.push_back("ººÀ½¹ä") ;
    myl.push_front( menu) ;

    for( iter =myl.begin() ; iter != myl.end(); iter++) {
        menu = *iter ;
        for( miter = menu.begin() ; miter != menu.end() ; miter++ ) {
            cout << "\n item = " << *miter ;
        }
        cout << "\n\n Next iterm -----" ;
    } // end of for()

} // end of main()
