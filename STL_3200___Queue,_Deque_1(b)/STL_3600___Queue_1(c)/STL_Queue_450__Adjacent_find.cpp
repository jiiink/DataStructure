#include<bits/stdc++.h>
using namespace std;

bool myfunction ( string i, string j) {
  return ( (i+"*")==(j)) ;  // 1 차이나는 연속원소
}


int main() {

  cout << "Deque에서 adjacent_find( ) 활용하기 \n"  << endl;
  deque<string> player(20);
  deque<string>::iterator i;

  // Initialize the deque:
  player[0] = "Pele";
  player[1] = "Platini";
  player[2] = "Maradona";
  player[3] = "Maradona";
  player[4] = "Rossi";
  player[5] = "Alexander";
  player[6] = "Maradona";
  player[7] = "Maradona*";
  player[8] = "Alexander";

  // Find the first pair of equal consecutive names:
  i = adjacent_find(player.begin(), player.end());
  cout << "\n 출력 1 " << *(i) ;
  cout << "\n 출력 2 " << *(i+1) ;


  cout << "\n\n 인접한 문자열끼리 * 하나가 차이날 때 " ;
  i = adjacent_find(player.begin(), player.end(), myfunction);
  cout << "\n 출력 1 " << *(i) ;
  cout << "\n 출력 2 " << *(i+1) ;




  // Find the first name that is lexicographically
  // greater than the following name:
  cout << "\n\n 새로운 기준 greater<string>()으로 sorting한 다음 " ;
  i = adjacent_find(player.begin(), player.end(), greater<string>());

  cout << "\n 출력 4 " << *(i) ;
  cout << "\n 출력 5 " << *(i+1) ;

  return 0;
}
