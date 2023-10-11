// C++ 리스트와 Python list와 차이점을 이해해야 한다.
// Python에서 la=[1,2,3], lb=la를 하면 둘은 같은 객체를 가르킨다.
// 그러나 C++ list에서는 완전히 value를 복사해서 2개의 독립된 대상을 만든다.


#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;


int main(){

    list<int> lista = { 10, 20, 30, 40, 50, 60, 70, 80 } ;
    list<int> listb = { 100, 200, 300, 400, 500, 600, 700 } ;
    list<int> listx, listy ;

    myout(" lista[]= ", lista) ;
    myout(" listb[]= ", listb) ;

    listx = lista ;  // 내용을 copy한 뒤에 새로 만듬. 두개는 독립.
    myout(" listx = lista 후 listx[]= ", listx) ;

    cout << "\n lista[]의 끝 원소를 제거함.\n" ;
    lista.pop_back() ;
    myout(" lista[]= ", lista) ;
    myout(" listx[]= ", listx) ;

    //    listy = lista + listb ; C++는 python이 아닙니다. + operator가 없음

    return 0;
}
