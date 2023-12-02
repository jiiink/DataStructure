#include <iostream>
#include <deque>
#define allout(MSG,X)   cout<<"\n\n"<<MSG;for(auto w:X)cout<<w<<", "
using namespace std;

int main () {

  deque<int> Q1 {101, 102, 103, 104, 105 } ;
  deque<int> Q2 {201, 202, 203, 204, 205, 206, 207 } ;
  allout( "1. Q1= ", Q1 ) ;
  allout( "2. Q2= ", Q2 ) ;

  Q1 = Q2;

  allout( "After  Q1= ", Q1 ) ;
  allout( "After  Q2= ", Q2 ) ;

  Q1 = deque<int>();
  allout( "3. Q1=deque<int>( ) ", Q1 ) ;

  cout << "\n Size of Q1: " << int (Q1.size()) << '\n';
  cout << "\n Size of Q2: " << int (Q2.size()) << '\n';
  return 0;

}
