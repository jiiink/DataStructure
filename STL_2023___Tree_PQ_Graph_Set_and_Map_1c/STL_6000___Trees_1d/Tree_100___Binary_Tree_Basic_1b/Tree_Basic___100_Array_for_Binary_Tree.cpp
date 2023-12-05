#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


// 여러분은 이 부분을 채워야 합니다.
int tree_depth( vector<string> T) {
     int     depth ;
     depth = 100 ;
     return( depth) ;
}

int main() {
    int num ;
    vector <string> atree = {  "Zerg", "apple", "book", "coke", "red", "Cat", "Beer", "GO", "0", "TV", \
                               "Radio", "0", "Music", "0",   "0",    "0",   "0", "0", "0", "0", \
                                "0",     "0",  "0",   "0",   "0",    "0",   "0", "0"} ;
    allout("Array로 표시된 트리", atree) ;

    // 트리의 root는 atree[0]에 저장되어 있음.
    cout << "\n Type a node number:" ;
    cin >> num ;
    cout << "\n Two Children of node " << num << " are \n { " ;
    cout << atree[2*num+1] << " and " << atree[2*num+2]  << " } \n\n" ;

    num = tree_depth( atree) ;
    cout << "\n atree의 Depth =" << num ;

} // END OF MAIN( )