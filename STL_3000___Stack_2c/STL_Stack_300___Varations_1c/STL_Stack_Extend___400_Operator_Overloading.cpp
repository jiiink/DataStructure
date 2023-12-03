// STL - 추상형 Stack을 다양한 방법으로 구현하기 //
#include <bits/stdc++.h>
using namespace std;

bool operator==( stack<int> a , stack<int> b ) {
    cout << "In operator== " << a.top() << "  " << b.top() << endl;
    while( a.empty() && b.empty()){
         if ( a.top() != b.top() ) return ( false ) ;
         a.pop() ; b.pop() ;
    }
    return(false) ;
} // 수정 필요. empty일때까지 계속 top( )비교. 한번이라도 다르면 return(false)

stack<int> operator+( stack<int> a, stack<int> b) {
    int tmp ;
    stack<int> tmp_stack, result = a;
    while(!b.empty()){
        tmp = b.top() ;
        tmp_stack.push(tmp);
        b.pop();
    }
    while(!tmp_stack.empty()){
        tmp = tmp_stack.top() ;
        result.push(tmp);
        tmp_stack.pop();
    }
    return ( result ) ;
}
stack<int> operator-(stack<int> a){ // 단항자(unary) 마이너스 - , 내용을 뒤집음
    stack<int> tstack;
    while(!a.empty()){
        tstack.push(a.top());
        a.pop();
    }
    return tstack;
}

ostream& operator<< (ostream& os, stack<int> a){ // 출력 연산자 정의
    while( !a.empty() ){
        os << a.top() << ' ';
        a.pop();
    }
    return os;
}

int main() {

    cout << "연산자 Overloading(중첩)을 스택에 활용하기." << endl;

    stack <int> s0, s1, s2 ;

    s0.push(45) ;  s0.push(23) ;  s0.push(99) ;  s0.push(3) ;
    s1.push(45) ;  s1.push( 5) ;  s1.push(1) ;

    cout << "s0.top()=" << s0.top() << endl;

    if ( s0 == s1 ) cout << "s1과 s2는 같습니다. " ;
    else  cout << "s1과 s2는 다릅니다. " ;
    cout << "\n크기변화 " << s0.size() << " " << s1.size() << " " << s2.size() ;

    s2 = s0 + s1 ;
    cout << "\n\n 스택 덧셈을 하고난 뒤의 결과 " ;
    cout << s0.top() << " " << s1.top() << " " << s2.top();
    cout << "\n\n 크기변화 " << s0.size() << " " << s1.size() << " " << s2.size() << endl ;

    cout << "스택 순서 뒤집기" << endl;
    cout << "기존 스택 : " << s2 << endl;
    cout << "순서 뒤짚은 스택 : " << -s2 << endl;

  return 0;
}
