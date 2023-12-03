
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
using namespace std;


typedef pair<int,int>  Date;
typedef vector< Date > Student ;

int main() {

  Date x,y;
  Student  dsall ;
  array< Student,100 >  cbook ;    // 100명의 학생의 출력기록

  x = make_pair(9, 11) ;  // 9월 11일 결석
  dsall.push_back(x) ;
  x = make_pair(9, 28) ;   // 9월 28일 결석
  dsall.push_back(x) ;

  cout << "\n Size of cbook= " << sizeof(cbook) ;

  cbook[1] = dsall ;      // 1번 학생의 출력 기록
  cout << "\n Size of cbook= " << sizeof(cbook) ;


} // end of main()
