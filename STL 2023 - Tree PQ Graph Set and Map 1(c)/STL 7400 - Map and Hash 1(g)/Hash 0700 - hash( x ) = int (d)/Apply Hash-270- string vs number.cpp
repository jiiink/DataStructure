#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "1234", b = "1a2b3c";
	int num = 4321;

	// 1. string -> int
	cout << stoi(a) << "\n";
	// 8진수 1234를 -> 10진수로 변환
	cout << stoi(a,nullptr,8) << "\n";


	// 2. string 문자열에서 숫자만 구분하여 출력
	for (int i = 0; i < b.size(); i++) {
		if (b[i] >= '0' && b[i] <= '9') cout << b[i] - '0';
	}
	cout << "\n";


	// 3. int -> string
	string s = to_string(num);
	string r = "결과 = ";

	r += num;
	cout << r << "\n";

	r = "결과 = ";
	r += s;
	cout << r << "\n";

	return 0;
}
