#include <iostream>
#include <cassert>
#include <deque>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>  // For find
using namespace std;


int main() {
  string myword ;
  vector<char> moum = {'a', 'e', 'i', 'o', 'u'} ;
  queue <char> Conso, Vowel ;


  cout << "문자열에서 모음과 자음으로 분리하기 " << endl;
  myword = "computerlanguage" ;

  for(auto w: myword ){
    cout << "\n char = " << w ;
    if ( find( moum.begin(), moum.end(), w) != moum.end() )
             cout << " 있음" ;
    else
             cout << " 없음" ;
  }



  return 0;
}
