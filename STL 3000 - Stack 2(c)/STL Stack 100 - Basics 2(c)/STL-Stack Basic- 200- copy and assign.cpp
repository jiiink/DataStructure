// stack에 사용할 수 있는 iterator는 없다. 왜냐하면 Stack은 오로지
// 하나의 원소 top( )만 노출되어 있기 때문이다.
// 만일 억지로 출력을 해야 한다면 꺼내서 출력하고 다시 넣어야 한다.

#include <iostream>
#include <stack>
#include "my_stack.h"
using namespace std;


int main () {
    stack <string> cards; /* Simple enough to create a stack */
    stack <string> another ;

    cards.push("Water"); /* push() will add a value, think of queues */
    cards.push("Candy");  /* adding some cards to the deck */
    cards.push("Banana");
    cards.push("Beer");
    cards.push("Fish");
    cards.push("Pizza");

    cout << "\n 준비된 Stack의 전체 원소 \n " ;
    cout <<  cards  ;
    cout << "\n 준비된 Stack에는 " << cards.size () << "개의 음식이 있습니다. " << endl;
    cout << "\n 제일 위에 있는 원소 top() =  " << cards.top() << endl;

    cout << "\n Top에 있는 원소를 뽑아 냅니다. \n" ;
    cards.pop(); // top에 있는 카드를 하나 뽑아냄 팝!!!! 소리가 들립니까 ?
    cout << "\n 하나가 popping된 후의 Top()의 원소 =  " << cards.top() << endl;
    cout << "\n popping된 후의 원소 개수 =  " << cards.size();
    cout << "\n 한번 Pop()한 이후의 Stack의 전체 원소 \n " ;
    cout << "한번 pop( )후 another[]= " <<  another  ;

    cout << "\n\n 스택 cards를 모두 another 스택으로 옮긴 후의 결과 " ;

    another = cards ;
    cout << "another[]= " <<  another  ;

    cards.pop() ;
    cout << "\n\n 스택 cards에서 하나를 뽑은 뒤 another의 결과 " ;
    cout << "하나 뽑은 뒤 another[]= " <<  another  ;

    return(0) ;

 }
