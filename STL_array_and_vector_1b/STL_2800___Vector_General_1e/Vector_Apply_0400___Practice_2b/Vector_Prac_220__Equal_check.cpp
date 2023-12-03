// vector를 한 덩어리로 비교하는 매우 유용한 함수입니다.
// 다양한 경우를 살펴보고 그 결과를 반드시 익혀두도록 합시다.
//

#include <bits/stdc++.h>
using namespace std;


int main() {

	 // 실험2. vector의 비교
	 cout << endl <<  "실험 - vector 통째로 비교하기 \n " << endl ;
	 const char *str6="0123456789";
     vector<char> vcomp1(&str6[0],&str6[10]);
     vector<char> vcomp2, vcomp3;

     vcomp2 = vcomp1;
	 puts(vcomp1 == vcomp2 ? "같다":"다르다");
	 puts(vcomp1 == vcomp3 ? "같다":"다르다");  // vcomp3 는 empty

     vcomp2.pop_back();
     cout << "\n 두번째 비교 실험 " ;
     puts(vcomp1 > vcomp2 ? "vcomp1 > vcomp2 ":"vcomp1 <= vcomp2");


	 return 0;
}
