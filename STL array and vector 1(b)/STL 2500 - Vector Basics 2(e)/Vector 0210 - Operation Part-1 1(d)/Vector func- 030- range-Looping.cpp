// vector 컨테이너에서 원소를 삽입하고 특정 원소를  삭제하기


#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {
     const char *str="0123456789";
     vector<char> vc(&str[0],&str[10]);
     allout ("생성 직후 ", vc);

     vc.push_back('A');
     allout ("A 추가", vc);

     vc.insert( vc.begin()+3,'B');
     allout ("B 삽입", vc);

     vc.pop_back();
     allout ("끝 요소 삭제", vc);

     vc.erase( vc.begin()+5,vc.begin()+6);
     allout ("5만 삭제", vc);

     vc.erase( vc.begin()+5,vc.end()    );
     allout ("5에서 끝까지 삭제", vc);

     // 실험 2
     cout << "\n \n 실험 2번 시작 합니다\n" ;
     vector<char> vc1;
     for (int i=0; i<10 ; i++) { vc1.insert(vc1.begin(),'Z');  }
     allout("개별 추가", vc1);

     vector <char> vc2;
     vc2.insert( vc2.begin(),10,'Z');
     allout("한꺼번에 추가", vc2);


} // end of main( )
