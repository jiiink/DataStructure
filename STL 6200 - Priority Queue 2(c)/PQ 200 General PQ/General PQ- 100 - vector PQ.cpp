#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :  ";for(auto w:X)cout<<w<<" "
using namespace std;

struct compare {  // private compare function
    bool operator()( vector<int> &l,  vector<int> &r ) {
        return l > r ;  // vector 전체 단위로 비교함.
    }
};

int main() {
  int num[] = { 45, 32, 11, 23, 69, 53, 12, 76, 86, 32, 18, 61 };

  priority_queue< vector<int>, deque<vector<int>>, compare > vecpq ;


  vector<int> v1(num+0,   num+3);
  vector<int> v2(num+1,   num+4);
  vector<int> v3(num+2,   num+5);
  vector<int> v4(num+0,   num+4);
  vector<int> v5(num+1,   num+5);
  vector<int> v6(num+2,   num+6);
  vector<int> v7(num+3,   num+4);
  vector<int> v8(num+4,   num+7);

  vecpq.push(v1);
  vecpq.push(v2);
  vecpq.push(v3);
  vecpq.push(v4);
  vecpq.push(v5);
  vecpq.push(v6);
  vecpq.push(v7);
  vecpq.push(v8);

  vector<int> tvec ;

  int i = 0 ;
  string title ;
  while( !vecpq.empty()){
    tvec = vecpq.top() ;
    i++ ;
    title = to_string(i) ;
    allout ( title , tvec ) ;
    vecpq.pop() ;

  }


} // end of main( )

