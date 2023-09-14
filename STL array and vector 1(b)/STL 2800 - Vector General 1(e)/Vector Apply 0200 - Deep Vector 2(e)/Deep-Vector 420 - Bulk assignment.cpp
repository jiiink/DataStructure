// 하나씩 집어는 것이 아니라 vector의 구간을 잡아서 한번에 넣는다.
// 아주 편안하고 중요한 기능이다.

#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> first;         // first는 <정수형> 이며 이것이 vector이다.
    vector <int> second;
    vector <int> third;

    first.assign (10, 2020);             // 2020을 10번 반복해서 집어 넣는다.
    vector <int>::iterator it;
    it=first.begin()+1;

    second.assign (it,first.end()-1); // first 의 처음과 끝을 제외한 원소들

    int myints[] = {1776,7,4};
    third.assign (myints,myints+3);   // 배일인 경우 begin() 사용 불가. 배열로 부터 받는다.

    cout << "Size of first: "  << int (first.size()) << endl;
    cout << "Size of second: " << int (second.size()) << endl;
    cout << "Size of third: "  << int (third.size()) << endl;

    return 0;
}
