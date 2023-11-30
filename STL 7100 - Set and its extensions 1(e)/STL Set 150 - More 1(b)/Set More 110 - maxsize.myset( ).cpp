// Set에서 제공해주는 메모리의 한도를 측정해보는 실험
#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

// 결론, 충분히 크다.

int main() {

    struct BigThing { double first[10000]; double second[1000000]; };
    set <int>      s1;
    set <double>   s2;
    set <char>     s3;
    set <string>   s4;
    set <BigThing> s5;

    cout << "\n Set의 최대 크기 측정 \n" ;
    cout << "Maximum size of a set <int> .........."
        << setw(11) << s1.max_size() << "\n"

        << "Maximum size of a set <double> ......."
        << setw(11) << s2.max_size() << "\n"

        << "Maximum size of a set <char> ........."
        << setw(11) << s3.max_size() << "\n"

        << "Maximum size of a set <string> ......."
        << setw(11) << s4.max_size() << "\n"

        << "Maximum size of a set <BigThing> ....."
        << setw(11) << s5.max_size() << "\n\n";

} // end of main()
