/*
	조건부 컴파일 (Conditional Compile)
	조건부 컴파일은 조건부 컴파일 지시자에 따라 코드의 일정부분을 컴파일 할 것인지 아닌지를 지정한다.
	본 예제의 경우 지시자가 XX인 경우, YY인 경우, 그 이외의 경우에 따라 컴파일 하는 부분이 달라진다.
	조건부 컴파일 지시자를 입력하기 위한 방법은 다음과 같다.

		Visual Studio : 프로젝트 속성 -> C/C++ -> 전처리기 -> 전처리기 정의에 지시자 추가 (ex. XX 추가)

		Dev C++ : 도구 -> 컴파일러 설정 -> 컴파일러 추가 명령에 체크, -D 지시자 추가 (ex. -D XX 추가)

		GCC(리눅스)	: G++ -D 지시자 파일.cpp (ex. G++ -D XX test.cpp)

		CodeBlock : [Project]-[Build Options...]-[Debug]-[#defines] 에 지시자 추가 (ex. -D XX 추가)
	하나의 소스로 목적에 맞게 컴파일 하는 용도로 빈번히 활용된다.
*/

// Setting >> Compiler >> #define 으로 가서
// DEBUG=1을 추가한다. 추가의 #define은 다음 줄에 추가 함.
// 반드시 MACRO=""을 추가해야 한다. =이 없으면 안됨.
// 만일 compile option에 손을 대면 전체를 rebuild해야 한다.

// 하는 방법은 Project에서 오른클릭을 해서 Clean을 하면
// 관련된 모든 부가 변수를 정리한다.

#include <stdio.h>

#ifdef XX
void func() {
	printf("XX!!\n");
}
#endif // XX
#ifdef YY
void func() {
	printf("YY!!\n");
}
#else
void func() {
	printf("ZZ!!\n");
}
#endif

int main(void) {
	func();
	return 0;
}
