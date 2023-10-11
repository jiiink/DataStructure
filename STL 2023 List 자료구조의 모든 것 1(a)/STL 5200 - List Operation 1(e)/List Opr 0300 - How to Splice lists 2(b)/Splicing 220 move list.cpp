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
using namespace std;
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main(){

     list <char> la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     list <char> ln = { '1', '2', '7', '8', '9', '0', '4' } ;
	 list <char> ls = { 'A', 'B', 'C', 'D', 'E' } ;
     list <char>::iterator ita,it1,it2;

     cout << "\n 실험  0: 실험 전 전체 리스트:" ;
     myout("la[]= ",la);myout("ln[]= ",ln);

	 cout << "\n\n 실험 1: 전체 리스트를 특정 리스트의 중간으로 옮기기 " ;
     ita=la.begin();ita++;ita++;
 	 la.splice(ita,ln); // 리스트 la의 ita 위치로 ln을 왕창 옮겨라. 그라믄 ln은 ?
     myout("la[]= ",la);myout("ln[]= ",ln);

     la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     ls = { 'A', 'B', 'C', 'D', 'E' } ;
     cout << "\n\n 실험 2: 리스트의 한 원소만 뽑아서 옮기기" ;
     myout("la[]= ",la);myout("ls[]= ",ls);
     ita=la.begin();ita++;ita++;
     it1=ls.begin();it1++;it1++;
     la.splice( ita, ls, it1);  // la의 ita 위치에 list ls의 it1 원소를 빼서 옮겨라.

     cout << "\n\n 한 원소만 뽑아서 옮긴 후 최종 결과 : " ;
     myout("la[]= ",la);myout("ls[]= ",ls);


} // end of main( )

