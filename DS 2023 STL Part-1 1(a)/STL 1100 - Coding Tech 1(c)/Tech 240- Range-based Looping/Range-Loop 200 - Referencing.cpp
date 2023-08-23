#include <iostream>
#include <vector>

#define show(vx) \
    do { \
        cout<<"\n" ; \
        for( auto s : vx ) cout << " " << s ; \
    } while(0)



using namespace std ;

int main() {
    vector<int> NList1 {5, 11, 13, 2020, 100 };
    vector<int> NList2 {5, 11, 13, 2020, 100 };

    for( auto  i : NList1 ) {
         i = i*(-1) ;
    }


    for( auto &i : NList2 ) {
         i = i*(-1) ;
    }

    show( NList1) ;
    show( NList2) ;

    return 0;
}
