#include <iostream>
using namespace std;

template<typename T> // 일반 함수 템플릿
T Add(T a, T b) {
	T result = a+b;
	return result;
}

// 함수 템플릿 전문화(위의 함수 템플릿을 오버라이드 한 것)
// 템플릿 파라미터가 모두 double 자료형이라면 이 함수가 우선적으로 호출된다
template<>
double Add(double a, double b) {
	double result = a+b;
	return result;
}

int main() {

	int sum = Add<int>(2, 3);                       // <int> 는 생략가능
	cout << "정수 합계:" << sum << endl;
	double dsum = Add<double>(2.1, 3.2);    // <double> 은 생략가능
	cout << "실수 합계:" << dsum << endl;
	return 0;
}
