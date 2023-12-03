#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "
using namespace std;

template <typename T>
void dump_Q(string MSG, std::queue<T> myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "어.. 비어있는 Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}

template <typename T>
void dump_DQ(string MSG, std::deque<T> myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "어.. 비어있는 Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}



int main() {
    queue <int>  myQ ;  // 큐, 스택의 초기화는 불가능하다. 왜 ?
    deque <int>  myD {11, 12, 13, 14, 15, 16, 17} ;
    array <int, 5> myA {101, 102, 103, 104, 105} ;
    queue <int, deque<int>> yourQ(myD) ;


    dump_Q( "Step1= ", yourQ ) ;
    yourQ.push( 3456 ) ;
    dump_Q( "Step2= ", yourQ ) ;

}
