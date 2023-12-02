
#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {

     list <string> ml = {"다람쥐",   "너구리", "오소리", "도마뱀", "똥개" } ;
     list <string>::iterator it ;


	 cout << "\n ml.size()= " << ml.size() ;


	 it = ml.begin() ;
	 int count=1 ;
	 while( it != ml.end() ) {
        cout << "\n " << count++ << "= " << *(it) ;
        it++ ; // 다음 원소 , 단 it = it + 1 로 쓰면 안된다. 이것은 일종의 jump
	 } // end of while()



  cout << "\n 거꾸로 전진하기 backwards:\n";
  for ( auto rit=ml.rbegin(); rit!=ml.rend(); ++rit)
     cout << "\n " << distance(ml.rend(),rit) << "= " << *rit;


  return 0;
}






