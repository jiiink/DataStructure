// multimap은 하나의 slot에 여러개의 원소를 넣을 수 있다.
// 예를 들어 어떤 학생의 결석날자가 여러 개 일 경우이다.

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	multimap<string , int> m;

	m.insert(pair<string, int>("수박",  10000)); // 수박에는 가격이 다른 2종류가 있다.
	m.insert(pair<string, int>("수박",   9000));
	m.insert(pair<string, int>("참외",   7000));
	m.insert(pair<string, int>("딸기",   6000));
	m.insert(pair<string, int>("복숭아", 12000));
	m.insert(pair<string, int>("포도",   15000)); // 포도에도
	m.insert(pair<string, int>("포도",   15000));

	cout << "실험 1 " << endl;
	cout << "멀티탭은 중복 값이 허용된다." << endl;

	multimap<string, int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout << "과일 : " << it->first <<" 가격 : "<< it->second << endl;
	}

	m.erase("수박");

	cout << "\n\n 실험 2" << endl;
	cout << "m.erase(\"수박\")수행한뒤"<<endl;
	cout << "수박에 해당하는 값이 전부 삭제되었음을 알수 있다."<< endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "과일 : " << it->first <<"가격 : "<< it->second << endl;
	}
	return 0;
} // end of main( )
