#include <bits/stdc++.h>
using namespace std ;

typedef struct {
            string studname ;
            vector <int> reports;
        } Sreport ;  // 학생 1명의 정보, 이름과 실험보고서 점수 vector

void show_data( vector< Sreport > IN ){ // 입력 데이터 보여주기
    for(auto OneS : IN ) {
        cout << "\n " << OneS.studname ;
        for(auto w: OneS.reports ) {
            cout << " " << w << ", " ;
        }
    }
}

void read_data( vector < Sreport> &X  ){  // 입력 파일을 읽어서 vector  allreport에 저장함
    int N, score  ;
    string sname ;    // 학생의 이름
    Sreport onerep ;  // 학생이 제출한 보고서의 성적 vector

    cin >> N ;
    for(int i=1; i <= N; i++){
        cin >> sname ;
        onerep.studname = sname ;
        onerep.reports.clear( ) ;
        while( 1 ){
            cin >> score ;
            if( score == 0 ) break ;
            else onerep.reports.push_back( score ) ;
       }
       X.push_back( onerep ) ;  // 한 학생의 정보 (이름, 점수 vector )를 넣음,
    } // end of for i

} // end of readdata( )

int main () {
    vector< Sreport > Dreport ; // 모든 학생의 report를 담는 vector

    read_data(  Dreport ) ;     // 데이터를 읽어서 Dreport에 담음,
    show_data(  Dreport ) ;     // 입력이 제대로 되었는지 확인해 봄.

    return 0;
}
