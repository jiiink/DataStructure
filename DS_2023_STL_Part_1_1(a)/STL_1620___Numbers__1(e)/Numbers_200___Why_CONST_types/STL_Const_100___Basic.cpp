#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std ;


const double Pi = 3.14159;
const char newline = '\n';

int main () {

    double r=5.0;               // radius
    double circle;

    circle = 2 * Pi * r;

    Pi += 0.001 ;  // 무슨 오류가 나는지 확인해보세요.
    cout << circle;
    cout << newline;
}
