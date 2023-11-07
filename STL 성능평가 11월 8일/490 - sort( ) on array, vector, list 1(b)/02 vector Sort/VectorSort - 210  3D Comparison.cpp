// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄

#include <bits/stdc++.h>
using namespace std;


int main() {

    int i,j,t ;


    vector < vector<int> > vvd = { {15}, {22, 33}, {66}, {0,1,2}} ;
    vector < vector<int> > vve = { {15,22}, {22, 33}, {66}, {0,1,2}} ;
    vector < vector<int> > vvf = { {22, 33}, {66}, {0,1,2}} ;

    (vvd > vve ) ? cout << "vvd > vve \n" : cout << "vvd < vve \n" ;
    (vvd > vvf ) ? cout << "vvd > vvf \n" : cout << "vvd < vvf \n" ;
    (vve > vvf ) ? cout << "vve > vvf \n" : cout << "vve < vvf \n" ;

    sort( vve.begin(), vve.end() ) ;
    cout << "\n vve[0][0]= " << vve[0][0] << endl ;
    cout << "\n vve[1][0]= " << vve[1][0] << endl ;

} // end of main ( )
