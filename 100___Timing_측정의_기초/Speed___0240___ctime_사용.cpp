#include <iostream>
#include <ctime>

using namespace std ;


int main(){
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    cout << "Current Date: " << now->tm_mday <<\
     '/' << (now->tm_mon + 1) << '/'<< (now->tm_year + 1900) << endl;return 0;
}

