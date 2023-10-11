/* 2. C++11 std::intializer_list

C++11에서는 이를 std::initializer_lists 템플릿 클래스를 통해 확장하였으며,
이는 STL의 기본 컨테이너들을 포함한 모든 클래스에서 사용이 가능하다.

template<typename T>
class initializer_list;

std::initializer_list<T> 오브젝트는 T 타입의 배열에 대한
엑세스를 제공하는 경량화된 프락시 오브젝트라 할 수 있다.
std::initializer_list<T> 오브젝트는 아래와 같은 상황들에서 자동으로 생성된다.
braced-init-list( { ... } )가 리스트형 초기화에 사용되는 경우
( 예1. XXX = { ... }  예2. void func( { ... } ) )
(Uniform initialization 참고)
braced-init-list( { ... } )가 auto 변수에 바인딩되는 경우
(ranged-for-loop 안에서의 경우 포함)
(4. brace-init-list 참고)

C++11 컴파일러는 위 상황들에서 { ... } syntax를 통해 정적으로 std::initializer_list<T>
오브젝트를 생성해 내는 것이다.
initializer_list는 두 개의 포인터 (T* begin, T* end)를 이용해 구현하는 방법이 있고,
하나의 포인터와 사이즈 변수를 이용해 구현하는 방법이 있는데, VS2013의 경우
두개의 포인터(*begin, *end)를 이용하여 구현되어 있다.
initializer_list 오브젝트의 복사는 deep-copy가 아닌, 포인터의 shallow-copy로
이루어진다. 따라서, 원본 initializer_list 오브젝트가 파괴된 이후 복사된
initializer_list<T> 오브젝트의 T 데이터들이 온전히 존재함을 보장하지 못한다.  */


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <initializer_list>
using namespace std;

template <class T>
struct Sample {
    Sample(initializer_list<T> l) : v(l) {
        cout << "constructed with a " << l.size() << "-element list\n";
    }
    void append(initializer_list<T> l) {
        // initializer_list는 begin()/end() 메써드를 제공한다
        v.insert(v.end(), l.begin(), l.end());
    }
    pair<const T*, std::size_t> c_arr() const  {
        return { &v[0], v.size() };    // 반환값으로...
    }
    vector<T> v;
};


// 함수 템플릿의 인자로 사용 가능한지 테스트하기 위한 빈 함수 템플릿
template <typename T>
void templated_fn(T) {}

int main( ) {


    Sample<int> s = { 1, 2, 3, 4, 5 }; // intializer-list를 인자로 가지는 생성자 함수 호출
    s.append({ 6, 7, 8 });             // append 함수의 인자로써의 initializer_list
    cout << "The vector size is now " << s.c_arr().second << " ints:\n";

    // ranged-base-for 문 안에서 auto 형식에 바인딩되어 생성되는 intializer_list
    for (int x : { -1, -2, -3 })    cout << x << ' ';

    cout << '\n';

    // 역시 auto에 바인딩되면서 initializer_list 생성
    // initialize_list의 size()는 원소수를 반환한다
    auto al = { 10, 11, 12 };
    cout << "The list bound to auto has size() = " << al.size() << '\n';

     // 아래 2개는 OK
    templated_fn<initializer_list<int> >({ 1, 2, 3 });
    templated_fn<vector<int> >({ 1, 2, 3 });


    // STL 컨테이너 초기화도 척척
    // 모두 initializer_list가 생성되며, intializer_list를 인자로 받는 생성자를 호출하게 된다.


    string s1{'a', 'b', 'c', 'd'};
    vector<string> v1 = { "xyzzy", "plugh", "abracadabra" };
    map<int, string> m =  {
        { 1, "a" },  { 2, { 'a', 'b', 'c' } }, { 3, s1 }  };
    return 0;

} // end of main( )
