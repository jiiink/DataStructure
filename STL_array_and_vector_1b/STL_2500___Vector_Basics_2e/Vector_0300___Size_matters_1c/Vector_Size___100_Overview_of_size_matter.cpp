/* Vector 자료구조에 적용되는 Operation.

size		원소 개수를 계산한다. 크기가 아니고 갯수다, 갯수.... 좌석의 수를 계산하는 것이다.

max_size	벡터가 관리할 수 있는 최대 요소 개수를 조사한다.

capacity	할당된 요소 개수를 구한다. 전체 공간이 아니라, 자리에 앉은 손님을 게산하는 것이다.

resize(n)	크기를 변경한다. 식당 자리를 더 늘이서나 줄인다. .
		새 크기가 더 클 경우 벡터의 원래 내용은 유지하며 새로 할당된 요소는 0으로 초기화된다.

reserve(n)  최소한의 크기를 지정하며 메모리를 미리 할당해 놓는다. (예비용 의자를 식당에 추가)
            새 크기가 더 클 경우 벡터의 원래 내용은 유지한다. 새로 할당된 요소는 초기화되지 않는다.
            최기화 하지 않는다. 이걸 기억하라. 여하간 초기화를 믿지마라. 의심나면 확인

clear(n)	모든 요소를 삭제하고 크기를 0로 만든다. 식당 손님을 다 퇴장시킨다.
          식당을 파괴하는 것은 아니다. 손님만 OUT !

empty	비어 있는지 조사한다.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<int> vi {91, 92, 93 };

     printf("max_size = %d\n",vi.max_size());
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.push_back(123);
     vi.push_back(456);
     cout << "\n 두번의 push_back( ) 이후 \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.resize(10);
     cout << "\n vi.resize(10) 이후 \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());
     vi.reserve(20);
     cout << "\n vi.reserve(20) 이후 \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.clear() ;
     cout << "\n vi.clear( ) 이후 \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.reserve(100);
     cout << "\n 다시 reserve(100) 이후 \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

} // end of main( )



