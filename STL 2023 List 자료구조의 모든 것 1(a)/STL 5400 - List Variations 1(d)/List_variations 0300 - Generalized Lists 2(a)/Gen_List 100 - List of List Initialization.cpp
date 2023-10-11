#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto w : lx ) cout<< " " << w ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}
using namespace std;

typedef list<int> iLIST ;

int main() {

	list< iLIST > mylist  = {  { 2, 8,} , {7}, {}, {5, 3, 1} , {4}, {0, 3, 4, 5, 8,12} } ;

	for(auto wlist : mylist ) {
        cout << "\n" ;
             for(auto s : wlist ){
                   cout << " " << s ;
             }
     }

     deepout("이중 리스트의 출력", mylist ) ;
	return 0;
}

