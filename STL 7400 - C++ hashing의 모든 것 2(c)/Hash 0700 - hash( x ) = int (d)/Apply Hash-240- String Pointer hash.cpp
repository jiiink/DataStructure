// hash example
#include <iostream>
#include <functional>
#include <string>
using namespace std ;


int main () {

  char nts1[] = "Test";
  char nts2[] = "Test";
  char nts3[] = "Test2";
  char nts4[] = "Test3";
  string str1 (nts1);
  string str2 (nts2);

  hash <char* > ptr_hash;
  hash <string> str_hash;

  cout << "same hashes:\n" << boolalpha;
  cout << "nts1 and nts2: " << (ptr_hash(nts1)==ptr_hash(nts2)) << '\n';
  cout << "str1 and str2: " << (str_hash(str1)==str_hash(str2)) << '\n';

  cout << "\n str_hash(str1)= " << str_hash(str1) ;
  cout << "\n str_hash(1)= " << str_hash("1") ;
  cout << "\n str_hash(2)= " << str_hash("2") ;
  cout << "\n str_hash(3)= " << str_hash("3") ;
  cout << "\n str_hash(4)= " << str_hash("4") ;

  cout << "\n str_hash(nts1)= " << ptr_hash(nts1) ;
  cout << "\n str_hash(nts2)= " << ptr_hash(nts2) ;
  cout << "\n str_hash(nts3)= " << ptr_hash(nts3) ;
  cout << "\n str_hash(nts4)= " << ptr_hash(nts4) ;

  return 0;
}
