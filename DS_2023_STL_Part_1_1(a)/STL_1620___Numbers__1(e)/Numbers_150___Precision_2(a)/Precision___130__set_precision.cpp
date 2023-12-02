#include <iomanip>
#include <sstream>
#include <iostream>

int main() {
  std::stringstream stream;
  double pi = 3.14159265359;

  stream << std::fixed << std::setprecision(6) << pi;
  std::string s = stream.str();
  std::cout << "s= " << s ;
}


