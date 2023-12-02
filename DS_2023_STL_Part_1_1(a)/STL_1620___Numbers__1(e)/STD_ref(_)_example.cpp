#include <iostream>
#include <tuple>
#include <functional>
using namespace std ;

/* ref( )의 활용
- <functional> 에 있으며 특정 타입을 참조하는 객체를 만든다.
- auto r = ref(var)로 생성할 수 있다.
-  r.get() 또는 바로 r로 해당 변수로서 사용되어 진다.
- &와 다르게 타입만 같다면 참조대상을 바꿀 수 있다.
- 주로 thread의 인자 또는 bind의 인자로 넘겨줄 때 사용한다.
*/

void print(int i) {
    cout << i << '\n';
}

int main() {
    int i = 10;

    auto f1 = bind(print, i);
    auto f2 = bind(print, ref(i));

    i = 20;

    f1(); // 10
    f2(); // 20
}
