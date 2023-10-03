#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

stack  <string> stk1 ;
vector <string> vec1 ;
string  mystr, yourstr ; // 문자열을 다루기 위한 변수, 반드시 include

void set_init() ;

// 억지로stack[i]번째 원소의 값을 찾아온다. 단 stack의 값은 변하지 않아야 한다.

string get_stack( int i ){
     return("None") ;
}

int main () {

    set_init( ) ;

    cout << "\n vec1[0]=" << vec1[0]  ;
    cout << "\n vec1[2]=" << vec1[2]  ;
    vec1[2] = "Red Wine" ;
    cout << "\n vec1[2]=" << vec1[2]  ;

    cout << "\n 실험이 끝났습니다." ;
    return(0) ;

    // 아래 동작은 왜 안될까요 ? 수행하면 어떤 오류가 날까요 ?
    // 반드시 오류를 확인하시기 바랍니다.
    // cout << stk1[0] ;
    // stk1[1] = "막걸리" ;

 } // end of main() 항상 닫는 괄호에는 이런 표시를 해야 좋습니다.

void set_init( ) {
    stk1.push( "banana") ;
    stk1.push( "beer"  ) ;
    stk1.push( "soju"  ) ;

    vec1.push_back( "banana") ;
    vec1.push_back( "beer"  ) ;
    vec1.push_back( "soju"  ) ;
 }
