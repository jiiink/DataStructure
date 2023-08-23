#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<string> cinPos(cin);
    ostream_iterator<string> coutPos(cout," <== Third tokens \n ");

    // 입력의 끝이 나올 때까지 진행 입력의 끝은 ^D

    while (cinPos != istream_iterator<string>()) {

        advance (cinPos, 2);  // 첫 2개의 string은 pass하라.

        // read and write the third string
        if (cinPos != istream_iterator<string>()) {
            *coutPos++ = *cinPos++;
        }
    }
    cout << "\n 끝 " << endl;
}
