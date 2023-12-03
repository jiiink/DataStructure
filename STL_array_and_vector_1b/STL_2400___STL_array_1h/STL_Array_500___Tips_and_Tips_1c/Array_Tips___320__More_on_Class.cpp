#include <bits/stdc++.h>
using namespace std;

template <typename T, int n>
class myArray {
  public:
     myArray() { a = new T[n];}
    ~myArray() { delete[] a;  }
     T& operator[](int i) {return *(a+i);} // 주소 a에서 i번째 위치의 값. *

  private:
    T* a;
};

int main() {

  myArray <int, 10> arr ;
  // arr = { 10, 20, 30, 40, 50 }; // 안됨. Class 이기 때문에
  arr[7] = 777 ;
  arr[3] = -900 ;

  for(int i = 0; i < 10 ; i++)
        cout <<  i << "= " << arr[i] <<  endl ;

  return 0;
}
