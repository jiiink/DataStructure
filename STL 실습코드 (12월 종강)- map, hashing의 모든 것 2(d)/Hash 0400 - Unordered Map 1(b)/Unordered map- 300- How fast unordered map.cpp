
#include <bits/stdc++.h>
using namespace std;

unordered_map <int, int> s ;  //replace it with set for test.
map <int, int> t  ;

int main(){

  auto T =clock();
  s.reserve(32768); //updated !
  s.max_load_factor(0.25); //updated !  4배 정도의 공간을 잡는다.

  for(int i=0;i<1000000;i++)
       s[i]=i*(i+7890)% 10000 ;

  cout << "\n unorderedmap을 사용한 경우 t= " <<double(clock()-T)/CLOCKS_PER_SEC<<'\n';

  T = clock() ;

    for(int i=0;i<1000000;i++)
       t[i]=i*(i+7890)% 10000 ;

  cout<< "\n map을 사용한 경우 t= " << double(clock()-T)/CLOCKS_PER_SEC<<'\n';
}
