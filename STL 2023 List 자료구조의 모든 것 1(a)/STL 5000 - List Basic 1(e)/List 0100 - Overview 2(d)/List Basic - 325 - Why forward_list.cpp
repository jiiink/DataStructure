#include <iostream>
#include <forward_list>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std ;

int main() {

    forward_list< int > flist {1,2,3,4,5,6};
    Outlist("1. 단방향 리스트 fliat[]= ", flist ) ;

    auto fit = flist.begin() ;

    fit++ ;
    cout << "\n 2. *fit = " << *fit ;

    fit++ ;
    cout << "\n 3. *fit = " << *fit ;

    fit++ ;
    cout << "\n 4. *fit = " << *fit ;

    //fit-- ;
    //cout << "\n 5. 뒤로 빽 한 뒤 *fit = " << *fit ;
    // error: no 'operator--(int)' declared for postfix '--' [-fpermissive]|||=== Build file: "no target" in "no project" (compiler: unknown) ===|


    return 0;
}

