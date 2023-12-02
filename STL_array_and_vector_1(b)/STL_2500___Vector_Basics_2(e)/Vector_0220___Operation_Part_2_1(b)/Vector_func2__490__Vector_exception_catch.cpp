#include <bits/stdc++.h>
using namespace std;

int main() {

    try {
        cout << "\n Exception 값을 던져보자....\n";
        throw 44542;
    } catch (int i) {
        cout << " 정수 Exception이 잡힘(caught), 그 값은 : " << i << '\n';
    }

    try {
        cout << "\n 3. 사이즈 5인 벡터 V(5)를 생성함.";
        vector<int> v(5);
        cout << "\n 4. v(5)에서 억지로 11번쨰 원소를 부름.";
        cout << v.at(10); // vector::at() throws out_of_range
    } catch (const exception& e) { // caught by reference to base
        cout << "\n 5. 표준 exception 이 붙잡힘. 그 메시지는 \n : "
                  << e.what() << "'\n";
    }

} // end of main( )
