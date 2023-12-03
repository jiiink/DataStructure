#include <iostream>
#include <vector>
#define  SKIP  cout << "-------------\n"
using namespace std ;

struct A {
    A() = default ;

    A( int ii, const string& ss ) : i(ii), str(ss) {
        cout << "  > 매개변수로부터 개체를 만듭니다. \n" ;   }

    A( const A& that ) : i(that.i), str(that.str) {
        cout << "  > 개체를 복사합니데이. \n" ;            }

    int i = 0 ;
    string str ;
};

int main () {
    vector<A> seq ;
    seq.reserve(10) ;

    A a ;

    seq.push_back(a) ;
    seq.insert( seq.end(), a ) ;
    seq.push_back( A( 12, "banana" ) ) ;
    seq.insert( seq.begin(), A( 15, "tomato" ) ) ;
    cout << "\n Size of seq[ ] " << seq.size() << endl ;

    // A의 instance를 중간변수없이 바로 만들어 넣는다. insert( )는 reference가 필요하지만
    seq.emplace_back      ( 150, "mango" ) ;
    seq.emplace( seq.begin(), 63, "papaya" ) ;
    cout << "\n Size of seq[ ] " << seq.size() << endl ;

    for(auto w : seq){
            cout << "\n seq[ ]: " << w.i << "  " << w.str  ;

    }

}
