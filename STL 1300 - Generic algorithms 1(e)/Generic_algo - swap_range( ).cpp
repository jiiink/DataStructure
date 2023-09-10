#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<" "
using namespace std;


template <typename Container>
Container make(const char s[]) {
    return Container(&s[0], &s[strlen(s)]);
}

int main() {

    vector<char> vector1 = make< vector<char> >("HELLO"),
                 vector2 = make< vector<char> >("summer_time");

    // 일단 임시공간으로 옮김
    allout("1. vector1[]= ", vector1) ;
    allout("2. vector2[]= ", vector2) ;

    vector<char> temp1 = vector1, temp2 = vector2;
    swap_ranges(vector1.begin(), vector1.end()-2, vector2.begin());

    allout("3. vector1[]= ", vector1) ;
    allout("4. vector2[]= ", vector2) ;

    swap_ranges(vector1.end()-2, vector1.end(), vector2.begin());

    allout("4. vector1[]= ", vector1) ;
    allout("5. vector2[]= ", vector2) ;
    return 0;
}
