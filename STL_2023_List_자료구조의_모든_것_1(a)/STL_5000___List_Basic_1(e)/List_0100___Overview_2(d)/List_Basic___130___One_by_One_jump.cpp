
#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {

     list <string> ml = {"Jan",   "Feb", "March", "April", "May", \
                         "June", "July",  "Aug.",  "Oct.", "Nov.", "Dec" } ;
     list <string>::iterator it ;

     Outlist("일년 달", ml)

	 ml.push_back("Silvester") ;
	 Outlist("1년+연말", ml );

	 cout << "\n\n List.size() = " << ml.size() ;


	 it = ml.begin() ;
	 int count=0 ;
	 while( it != ml.end() ) {
        cout << "\n" << count++ << "= " << *(it) ;
        it++ ;
        it++ ; // 다음 원소 , 단 it = it + 1 로 쓰면 안된다. 이것은 일종의 jump

	 } // end of while()


} // end of main()





