// map은 내부적으로는 Red-Black Tree로 구성되어 있다.  따라서 순서출력이 가능하다.
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <stdio.h>
using namespace std;


struct gtestr{
  bool operator()(const string s1, const string s2) const   {
    if ( s1 > s2 ) return(1) ;
    else return (0) ;
  }
};



int main(){

    map<string, int, gtestr > m;
	//insert를 이용한 삽입
	m.insert(pair<string, int>(string("장동건"), 100));
	m.insert(pair<string, int>("조환규", 1000));

	m["조인성"]=  200;
	m["정우근"]=  400;
	m["이병헌"]=  500;
	m["윤태진"]=   50;
	m["달건이"]= -150;

//	hash_set<int> ssssssss;

	map<string, int>::iterator it;
	cout << "실험 1" << endl;
	cout << "정상적인 입력 후 출력" << endl;
	cout << "얼짱 대회" << endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "이름 : " << it->first << " 상금 : " << it->second << endl;
	}

	m.erase(m.begin());
	m.erase("이병헌");

	cout << "\n 실험 2" << endl;
	cout << "erase(m.begin())과 erase(\"이병헌\") 을 수행후 출력!!" << endl;
	cout << "얼짱 대회" << endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "이름 : " << it->first << " 상금 : " << it->second << endl;
	}

	cout << "실험 3" << endl;
	cout << "find() 함수 사용" << endl;
	it=m.find("조환규");

    if (it==m.end()) {
		cout << "순위권에 없습니다." << endl;
	}else{
		cout << it->first << "의 상금은 " << it->second << "이다." << endl;
    }

    getchar( ) ;
	return 0;
} // end of main( )
