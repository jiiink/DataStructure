#include <iostream>
#include <ctime>

using namespace std ;


string currentDateTime() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);

    char buffer[128];
    strftime(buffer, sizeof(buffer), "%m-%d-%Y %X", now);
    return buffer;
}

int main() {
    cout << "Current Time and Date: " << currentDateTime() << endl;

    return 0;
}
