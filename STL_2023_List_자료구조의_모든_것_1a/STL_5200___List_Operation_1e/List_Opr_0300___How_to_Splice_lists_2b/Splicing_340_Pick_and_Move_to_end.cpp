/* C++ list의 Splicing Operation
entire list (1)
void splice (const_iterator position, list& x);
void splice (const_iterator position, list&& x);

single element (2)
void splice (const_iterator position, list& x, const_iterator i);
void splice (const_iterator position, list&& x, const_iterator i);

element range (3)
void splice (const_iterator position, list& x,
             const_iterator first, const_iterator last);
void splice (const_iterator position, list&& x,
             const_iterator first, const_iterator last); */

#include <bits/stdc++.h>
#define mout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     string sa = "Computer-123456-XYZ" ;
     list <char> la ( sa.begin(), sa.end()) ;
     list <char>::iterator it0, it1,it2 ;

	 cout << "\n\n 실험 전: " ;
     mout("la[]= ",la);

	 cout << "\n\n 실험 : 자기 안에서 잘라 붙이기 " ;

	 it1 = la.begin(); advance(it1,  5) ;  // 5칸 앞으로
	 it2 = la.end()  ; advance(it2, -5) ;  // 5칸 뒤로

     list <char> ltemp( it1, it2 ) ; // 리스트의 일부를 복사해서 새로 만듬
     mout("ltemp[]= ", ltemp ) ;

     it0 = la.begin() ; it0++ ; it0++; it0++ ;

	 la.splice( it0 ,          la,         it1,         it2 ) ;
	 //         이 위치에   이 리스트의      여기부터     여기까지를 잘라 옮겨라.
	 mout("\n\n 자체 이동 후 \n la[]= ", la ) ;
	 cout << "\n\n\n" ;


} // end of main( )

