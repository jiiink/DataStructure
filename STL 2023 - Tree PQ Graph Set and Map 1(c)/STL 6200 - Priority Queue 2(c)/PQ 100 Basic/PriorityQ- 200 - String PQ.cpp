#include <bits/stdc++.h>
using namespace std;

struct mycmp{ // 내가 정의한 우선순위 함수
    bool operator()( string t, string u){
        cout << "\n" << t.back() << " vs. " << u.back() ;
        return t.back() < u.back();  // 마지막 문자로 정렬
    }
};


int main(){ // priority_queue
	string words[10]= {"Summer", "Time", "Kill","BeerBox", "C++",
	                   "YouTube", "막걸리", "010-5678","뽕","GoodBoy" };

	priority_queue< string , vector<string>,  mycmp > Strpq( words, words+9);


	while(!Strpq.empty()){
		cout <<  "\n " << Strpq.top();
		Strpq.pop();
	}
	return 0;
} // end of main()


