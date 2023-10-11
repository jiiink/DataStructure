#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "

int main() {

	list<int> mylist ( { 2, 8, 7, 5, 3, 1, 4 }); // List 초기화는 특이하다.
    allout("처음 상황 : ", mylist) ;

	initializer_list<string> initLits = { "Hi", "this", "is", "sample" };
	list <string> Slist2 = { "무궁화", "꽃이", "피었습니까", "피었나고요?" };

	list<string> yourlist (initLits); // initializer_list 이용결과

    allout("두번째 상황 : ", yourlist) ;
    allout("Slist2 = : "   , Slist2) ;
	return 0;
}

