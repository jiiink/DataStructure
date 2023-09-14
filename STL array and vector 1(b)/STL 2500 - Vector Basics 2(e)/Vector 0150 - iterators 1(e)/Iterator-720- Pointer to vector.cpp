#include <bits/stdc++.h>
using namespace std;


struct Foo{
    vector<int> a;
};              // Foo는 struct이며 그 안에는 a라는 정수 vector가 있다.

int main() {

    Foo* f1 = new Foo; // f1은 Foo를 가르키는 pointer

    f1->a.push_back(  175);  // f1이 가르키는 vector의 뒤에 175를 넣어라.
    f1->a.push_back(  225);
    f1->a.push_back(  333);
    f1->a.insert( f1->a.begin(),  500);

    cout << "f1이 지시하는 vector의 첫 원소 =" << *f1->a.begin() << endl ;
    cout << "f1이 지시하는 vector의 끝 원소 =" << *(f1->a.end()-1) << endl ;

    cout <<  "sizeof(Foo) = " << sizeof(Foo)            << endl;
    cout <<  "sizeof(f1) = " << sizeof(f1)              << endl;
    cout <<  "sizeof(f1->a) = " << sizeof(f1->a)        << endl;
    cout <<  "sizeof(f1->a[0]) = " << sizeof(f1->a[0])  << endl;

 //   delete[] f1;

}
