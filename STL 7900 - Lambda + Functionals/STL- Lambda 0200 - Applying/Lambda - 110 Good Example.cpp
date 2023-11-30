#include <bits/stdc++.h>
#include <functional>
using namespace std;


int main(int argc, char** argv) {
   vector<int> v = {1, 2, 3, 4, 5};

   cout << "람다 사용하지 않는 경우" <<endl;
   for (auto it = v.begin(); it != v.end(); it++) {
       cout << *it <<endl;
   }

   cout << "람다 사용하는 경우" <<endl;
   for_each(v.begin(), v.end(), [](int val)  // [] 람다 함수의 시작점을 알리는 부분
       { cout << val <<endl;      }               //  { }안에 가 람다 함수의 구체적인 본체
   );

    return 0;
}




