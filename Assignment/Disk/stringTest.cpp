#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

    string st = " a b c d ";

    // 좌측 공백 제거
    st.erase(st.begin());
    cout << st.size() << endl;
    cout << st << endl;

    // 우측 공백 제거
    st.erase(st.end()-1);
    cout << st.size() << endl;
    cout << st << endl;

    // 전체 공백 제거
    st.erase(remove(st.begin(), st.end(), ' '), st.end());
    cout << st.size() << endl;
    cout << st << endl;

}