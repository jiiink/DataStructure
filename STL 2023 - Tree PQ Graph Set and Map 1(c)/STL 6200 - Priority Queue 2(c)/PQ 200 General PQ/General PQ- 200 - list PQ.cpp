#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :  ";for(auto w:X)cout<<w<<" "
using namespace std;

struct compare {  // private compare function
    bool operator()( list<int> &left,  list<int> &right ) {
        return left > right ;  // 끝 2자리 숫자만 비교 대상
    }
};

int main() {
  int num[] = { 1,2,3,4,5,6,7,8,9,-1};

  priority_queue< list<int>, deque<list<int>>, compare > ListPQ ;


  list<int> v1(num+0,   num+3);
  list<int> v2(num+1,   num+4);
  list<int> v3(num+2,   num+5);
  list<int> v4(num+0,   num+4);
  list<int> v5(num+1,   num+5);
  list<int> v6(num+2,   num+6);
  list<int> v7(num+3,   num+4);
  list<int> v8(num+4,   num+7);

  ListPQ.push(v1);
  ListPQ.push(v2);
  ListPQ.push(v3);
  ListPQ.push(v4);
  ListPQ.push(v5);
  ListPQ.push(v6);
  ListPQ.push(v7);
  ListPQ.push(v8);

  list<int> tvec ;

  int i = 0 ;
  string title ;
  while( !ListPQ.empty()){
    tvec = ListPQ.top() ;
    i++ ;
    title = "List-"+ to_string(i) ;
    allout ( title , tvec ) ;
    ListPQ.pop() ;

  }


} // end of main( )

