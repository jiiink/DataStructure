// 문제 3번
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int GetM(int i, int j, vector<int> L ) {
    int n ;
    n = (L.size()+1)/2 ;
    /*

    L을 이용해서 M[i][j]의 값을 출력해야 함.



    */
    return( L[0] ) ; // 이것은 동작을 확인하는 dummy code입니다.

}

vector<int> L1 { 3, -8, 1, 6, 10, 7, 2, 2, 9  } ;
vector<int> L2 { 7, 3, -8, 1, 6, 1, 4, 10, 7, 2, 10, 2, 9  } ;
vector<int> L3 { 3, 2, 1, 10, 7, 3, -8, 1, 6, 1, 4, 10, 7, 2, 10, 2, 9  } ;
int         N1, N2, N3 ;

int main () {
    int i, mi, mj, value ;
    N1 = (L1.size()+1)/2 ;
    N2 = (L2.size()+1)/2 ;
    N3 = (L2.size()+1)/2 ;

    srand(2023) ;
    for(i=1 ; i < int(N1*N1/2); i++) {
            mi = rand()%N1 + 1 ; // 무작위로 M의 원소를 선택한다.
            mj = rand()%N1 + 1 ;
            value = GetM( mi, mj, L1) ;
            printf("\n i=%d, j=%d, value=%d", mi, mj, value);
    }

    return 0;

}
