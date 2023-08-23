#include <iostream>

int main(){
    double pi = 3.1415926;

    std::string s(16, '\0');
    auto written = std::snprintf(&s[0], s.size(), "%.5f", pi);
    s.resize(written);
    std::cout << "s= " << s ;

} // end of main( )
