#include <iostream>
#include <vector>
#include <list>

using namespace std;

int foo(int a, int b ){
    return(a*a + b*b) ;
}

int main() {

    vector<int> vi ;
    list <int> li ;
    cout << " Debug 실험하기" << endl;

    for(int i=0 ; i < 10 ; i++){
            cout<<"\n";
            auto sqr = i * i ;
            vi.push_back( sqr ) ;
            li.insert( li.begin(), sqr ) ;
            for(auto w : li) cout << w << "-" ;
    } // end of for-i

    int q = foo(7,8) ;
    cout << "\n q= " <<  q ;
    return 0;
}
