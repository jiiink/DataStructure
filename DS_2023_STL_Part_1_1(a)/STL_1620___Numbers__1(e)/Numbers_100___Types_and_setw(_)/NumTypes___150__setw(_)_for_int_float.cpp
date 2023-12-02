#include <iostream>
#include <iomanip>
using namespace std ;


int main(void) {
        int a = 1234567890;
        int b = 1;
        int c = 22;
     
        // 10자리 길이 확인용.
        std::cout << a << std::endl;
     
     
        // setw를 이용해서 10넓이 만큼 출력
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;
     
        
        // 왼쪽 오른쪽
        std::cout << std::setw(10) << std::left << b << std::endl;
        std::cout << std::setw(10) << std::right << c << std::endl;
     
     
        // 왼쪽 출력 설정
        std::cout << std::left;
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;
     
     
        // 오른쪽 출력 설정
        std::cout << std::right;
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;
     
        return 0;
}
