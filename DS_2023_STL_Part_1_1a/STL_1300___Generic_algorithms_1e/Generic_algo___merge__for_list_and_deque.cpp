#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std;

template <typename Container>
Container make(const char s[]) {
    return Container(&s[0], &s[strlen(s)]);
}

int main() {

    char s[] = "aeiou";
    int len = strlen(s);

    list<char> list1 = make< list<char> >("computer-game");
    deque<char> deque1(20, 'x');

    list1.sort() ; // merge전에 반드시 sort( )가 되어야 한다.

    // Merge array s and list1, putting result in deque1:
    merge(&s[0], &s[len], list1.begin(), list1.end(), deque1.begin());

    allout("deque[]= ", deque1) ;

    return 0;
}
