#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :  ";for(auto w:X)cout<<w<<" "
using namespace std;

struct Mycomp {  // private compare function
    bool operator()( priority_queue<int> &PQ1,   priority_queue<int> &PQ2 ) {
         return( PQ1.size() < PQ2.size() ) ; // 크기가 더 큰  PQ을 우선한다.
    }
};

void printPQ(  string MSG, priority_queue<int> X ){
    cout << "\n " << MSG << ": " ;
    while ( !X.empty() ) {
        cout << " " << X.top() ;
        X.pop();
    }
} // end of printPQ()

int main() {
  priority_queue< priority_queue<int>, deque< priority_queue<int>>, Mycomp > DPQ ;
  priority_queue<int> TPQ ;  // 오름차순 우선순위 PQ 당.


  for(auto w : { 2, 10, 8, 7} ) TPQ.push(w);
  DPQ.push( TPQ ) ;   TPQ= priority_queue<int>() ; // clear
  for(auto w : { 3, 4, 6, 18, 27}) TPQ.push(w);
  DPQ.push( TPQ ) ;   TPQ= priority_queue<int>() ; // clear
  for(auto w : { 19, 13, 4, 9, 8, 7}) TPQ.push(w);
  DPQ.push( TPQ ) ;   TPQ= priority_queue<int>() ; // clear
  for(auto w : { 40, 50, 20}) TPQ.push(w);
  DPQ.push( TPQ ) ;   TPQ= priority_queue<int>() ; // clear

  int i = 0 ;
  string numstr ;
  TPQ= priority_queue<int>() ; // clear
  while( !DPQ.empty()){
        TPQ = DPQ.top() ;
        numstr = to_string(++i) ;
        printPQ( numstr, TPQ ) ;
        DPQ.pop() ;
  }

} // end of main( )

