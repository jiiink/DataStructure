#include <bits/stdc++.h>
using namespace std;

int mytype(int val){
    vector< int > interval {0, 15, 61, 100, 200} ;
    int type = 0 ;
    for(int cut: interval){
        if( val < cut ) return( type);
        else type++ ;
    }
}



int main() {

    vector <int> din { 23, -9, 44, 67, 103, 22, 16, 78} ;
    int code ;

    for( int w : din ){
        code =   mytype( w ) ;
        cout << "\n w = "<< w ;;
        switch (code){
            case 0 :  cout << " Error: 음수 나이 " ; break ;
            case 1 :  cout << " 어린이(Child) " ; break ;
            case 2 :  cout << " 성인(Adult) " ; break ;
            case 3 :  cout << " 노인(Old) " ; break ;
            case 4 :  cout << " Error: 너무 많은 나이. 확인요망 " ; break ;
            default:  cout << " 이것 뭐여 ? 확인 바람 " ; break ;
        }
    }

} // end of main()  by Zoh Q.
