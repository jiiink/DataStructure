#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;

void showvv( vector< vector<int> > Q ){
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        cout << "\n";
        i++; j=0 ;
    }
} // end of showit( )

bool myfunc ( vector<int> A,  vector<int> B)   {
    return ( A.size() > B.size() ) ;
}

vector<vector<int>> allreport ;
vector <string> namevec ;

void readdata( ){  // 입력 파일을 읽어서 이름은 순서대로 namevec
    int N, score  ;
    string sname ;
    vector <int> one ;
    cin >> N ;
    for(int i=1; i <= N; i++){
        cin >> sname ;
        namevec.push_back( sname );
        one.clear( ) ;
        while( 1 ){
            cin >> score ;
            if( score == 0 ) break ;
            else one.push_back( score ) ;
       }
       sort(one.begin(), one.end()) ;
       allreport.push_back( one ) ;
    } // end of for i

} // end of readdata( )

int main () {

    cout << "We read data \n " ;
    readdata( ) ;


    showvv( allreport );

    return 0;
}
