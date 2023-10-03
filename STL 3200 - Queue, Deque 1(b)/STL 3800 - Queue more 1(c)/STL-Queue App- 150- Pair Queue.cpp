// 다양한 원소를 기본으로 하는 큐 만들기
// Adaptor를 이용한 큐의 사용법을 보여줍니다.

#include <iostream>
#include <queue>
using namespace std;

int main() {
  int i;

  typedef pair<string, float > PLAYER ;  // 선수 이름과 타율
  typedef vector<int>       SEQ ;
  vector<int>  vectemp ;



  PLAYER    myplay ;
  SEQ       myseq  ;
  queue < PLAYER >  lotte ;
  queue < SEQ >     sk ;


  myplay.first  = "이대호" ;   myplay.second = 0.343 ;   lotte.push( myplay ) ;
  myplay.first  = "추신수" ;   myplay.second = 0.272 ;   lotte.push( myplay ) ;
  myplay.first  = "박보검" ;   myplay.second = 0.298 ;   lotte.push( myplay ) ;
  myplay.first  = "장동건" ;   myplay.second = 0.221 ;   lotte.push( myplay ) ;
  cout << "Queue size() = " << lotte.size() << endl;

  myseq.push_back( 34) ;  myseq.push_back( 134) ;  myseq.push_back( 234) ;
  sk.push( myseq ) ;
  myseq.push_back( 5) ;  myseq.push_back( 6) ; sk.push( myseq ) ;
  cout << "The queue SK size is now " << sk.size() << endl;

  return 0;
} // end of main( )
