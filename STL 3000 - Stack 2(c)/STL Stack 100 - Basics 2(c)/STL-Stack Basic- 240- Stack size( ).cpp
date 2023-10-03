#include <bits/stdc++.h>
using namespace std;


int main () {
    stack <string> cards;

    cards.push("이탈리아");  /* push() will add a value, think of queues */
    cards.push("도미니카");  /* adding some cards to the deck */
    cards.push("짐바브웨이");
    cards.push("크로아티아");
    cards.push("한국");

    cout << "\n 현재 스택에 있는 원소 수 = " << cards.size() ;
    cout << "\n Top of the deck = " << cards.top() ;

    cout << "\n Top에 있는 원소를 뽑아 냅니다. \n" ;
    cards.pop(); // top에 있는 카드를 하나 뽑아냄 팝!!!! 소리가 들립니까 ?
    cout << "\n 현재 Top에 있는 원소 =" << cards.top() ;
    cout << "\n 현재 Stack의 원소의 개수 = " << cards.size();

    cout << "\n\n Top에 있는 원소를 한번 더 뽑습니다. \n" ;
    cards.pop(); // top에 있는 카드를 하나 뽑아냄 팝!!!! 소리가 들립니까 ?
    cout << "\n 현재 Top에 있는 원소 =" << cards.top() ;
    cout << "\n 현재 Stack의 원소의 개수 = " << cards.size();


    return(0) ;

 }
