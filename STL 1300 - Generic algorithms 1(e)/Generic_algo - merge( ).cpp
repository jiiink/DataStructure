#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {  // fill the vectors with random numbers

    vector<int> v1  { 18, 23, 45,  3, 40, 67, 50, 32, 17,  9 } ;
    vector<int> v2  { 11, 36, 49, 63, 24,  9, 19, 69, 73, 32 } ;
    allout("Before v1[]= ", v1 ) ;
    allout("Before v2[]= ", v2 ) ;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    allout("After v1[]= ", v1 ) ;
    allout("After v2[]= ", v2 ) ;

    // merge¸¦ ÇØº¾½Ã´Ù.
    vector<int> v3;
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));

    allout("After merging:\n v3[]= : ", v3);
}
