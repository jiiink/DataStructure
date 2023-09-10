// standard macro names

#include <iostream>
using namespace std;

int main(){

    int __mymy = 9999 ;

  cout << "\n 여기다 여기, :   " << __LINE__;
  cout << " of file \n    : " << __FILE__ << ".\n";
  cout << "\n Its compilation began " << __DATE__;
  cout << " at " << __TIME__ << ".\n";
  cout << "\n The compiler gives a __cplusplus value of " << __cplusplus;
  cout << "\n 여기다 여기, :   " << __LINE__;
  return 0;
}
