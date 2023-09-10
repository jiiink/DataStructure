#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

bool mycond(int w){
    return( (w == 20) ) ;
}

int main () {

  vector<int> my {10,20,30,30,20,10,10,20, 45};
  allout("원래 vector v[]: ", my ) ;


  // 주의 주의 주의
  // 아래와 같이 하면 안된다. 왜냐하면 중간에 begin( ), end( )가 바뀌기 때문이다.
  //auto pend = remove_if ( my.begin(), my.end(), mycond );
  // 이렇게 범위를 고정해야 한다. :
  auto pbegin = my.begin();                          // ^
  auto pend   = my.end() ;  // ^
  auto itcut = remove_if ( pbegin, pend,  mycond );
  cout << "\n끝 위치 = " << itcut - pbegin  ;
  cout << "\n*itcut= " << *itcut ;
  allout("\nremove_if( ) 이후 vector v[]: ", my ) ;
  return 0;
}
