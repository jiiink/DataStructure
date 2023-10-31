#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

vector<int> leaf_node( vector <int> T ) {
    // 입력 tree는 T 입니다. 이 T의 모든 leaf을 vector leaves<int>에 담아서 돌려주세요.
    vector<int> leaves ;

    leaves.push_back( 666) ;
    leaves.push_back( 555) ;  // 여러분은 이 부분을 채워야 한다.
    return leaves ;
}

int main() {

    // 각 트리 노드는 1부터 N까지이며 각 노드는 parents 정보를 가지고 있다.
    // 즉 노드 i의 부모는 ptree[i], 노드는 ptree[1]번부터 시작 함. -1은 root

    vector <int> ptree = { 10, 29, 33, 44, 510, 13, 80, \
                           73, 18, 62, 77,   4, 13, 59, 49, 98 } ;

    allout ("\n 1. Array로 표시된 트리", ptree) ;

    vector <int> myleaf ;
    myleaf = leaf_node( ptree ) ;
    allout("\n 2. 트리 ptree의 모든 leaf nodes", myleaf) ;
    // 그림 gen_tree_01.png를 참조하시오.

} // END OF MAIN( )

