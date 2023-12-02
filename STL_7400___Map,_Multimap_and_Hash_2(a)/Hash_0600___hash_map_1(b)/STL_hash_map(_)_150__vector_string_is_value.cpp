#include <hash_map>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
using namespace __gnu_cxx;

int main() {

	vector <string> str, str2;
	hash_map <int , string> test1;
	hash_map <const char*, vector<string>> test2;
	hash_map <string, int>::iterator iter_test1;


	// test1 해시맵에 관한 예제
	str.push_back("very");
    str.push_back("nice");
	str.push_back("winter");
	str.push_back("white snow");  // str는 문자열 vector[]
	test1[1] = "sample" ;
	test1[333] = "Computer Science";

	test2["Good"] =  str ;

	cout << "\n test1[333] = " << test1[333] ;
    cout << "\n test1[334] = " << test1[334] ;
    str2 = test2["Good"] ;
    cout << "\n test2[Good] = " << (str2[2]) ;


    return 0 ;

}

