#include <iostream>
#include <iterator>
using namespace std;

int main() {

    // create istream iterator that reads integers from cin
    istream_iterator<int> intReader(cin);

    // create end-of-stream iterator
    istream_iterator<int> intReaderEOF;

    // EOF가 아닐때 까지 입력하고 2번 출력 함.
    cout << "1. 문자열을 입력하시오: " ;
    while (intReader != intReaderEOF) {
        cout << "2. 문자열을 입력하시오: " ;
        cout << "입력 문자열 =     " << *intReader << endl;
        cout << "한번더 출력 =   " << *intReader << endl;
        ++intReader;
    }
}
