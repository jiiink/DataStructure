#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

/*
범위 (first 부터 last 전 까지) 내에 원소들 중에서 val 과 값이 일치하는 원소(remove)들
혹은 조건 p 를 만족하는 원소(remove_if)를 제거한 범위로 변환합니다.
이 때 이 함수는 해당 범위의 맨 끝을 가리키는 반복자를 리턴합니다.

참고로 이 함수는 실제로 원소를 제거하는 것이 아닙니다. 다만, 지워야 하는
원소들을 컨테이너 맨 뒤로 보내버릴 뿐입니다.

즉, 위 함수가 리턴하는 반복자 부터 last 까지 원소들이 바로 val 과 일치하는
원소들로 대체됩니다. 따라서, 실제로 조건을 만족하는 원소들을 지워 버리기 위해서는
추가적으로 컨테이너들의 erase 함수를 호출해야 합니다.

지워지진 않은 원소들의 상대적 위치는 유지됩니다. 하지만, 지워질 원소들의 상대적
위치의 경우 유지됨이 보장되지 않습니다.
이 함수는 operator== 를 이용해서 원소를 비교합니다.
*/

bool mycond(int w){
    return( (w == 20) ) ;
}

int main () {

  vector<int> my {10,20,30,30,20,10,10,20};
  allout("원래 vector v[]: ", my ) ;


  // 주의 주의 주의
  // 아래와 같이 하면 안된다. 왜냐하면 중간에 begin( ), end( )가 바뀌기 때문이다.
  //auto pend = remove_if ( my.begin(), my.end(), mycond );
  // 이렇게 범위를 고정해야 한다. :
  auto pbegin = my.begin();                          // ^
  auto pend   = my.end() ;  // ^
  remove_if ( pbegin, pend,  mycond );
  allout("remove_if( ) 이후 vector v[]: ", my ) ;
  return 0;
}
