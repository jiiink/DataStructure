#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X) std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<" "

int main() {

     cout << "\n List sorting과 중복원소 제거(unique)" << endl ;
	 list <string> lia = { "banana" , "coffee", "apple", "tomato", \
	                       "banana", "apple", "apple", "apple", "coffee", "banana"};
	 list <string> lib = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     list <string> lic, lid ;
     list <int>  Lx = { 17, 6, 7, 9, 17, 9, 20, 20, 5, 20, 19, 18, 17} ;

     allout("원본 리스트= ",lia);
     lia.unique();      allout("\n0. unique후 List-a",lia);
     // 인접한 원소만 고려한다.

	 lia.sort();        allout("\n1. sort후 List-a:",lia);
	 lib.sort() ;       allout("\n2. sort후 List-b:",lib);
     lia.unique();      allout("\n3.  lia.unique(): ",lia);
     // 반드시 정렬을 한 다음에 unique( )를 적용

     Lx.sort();
     Lx.unique();
     allout("\n4. unique후 Lx= ", Lx );

} // end of main()





