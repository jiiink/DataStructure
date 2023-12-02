
#include <bits/stdc++.h>
using namespace std ;


int main(){

  cout << "\n sizeof(int)= " << sizeof(int) ;

  int cArr[10]         = {1,2,3,4,5,6,7,8,9,10};
  array<int,10> cppArr ={1,2,3,4,5,6,7,8,9,10};
  vector<int>   cppVec ={1,2,3,4,5,6} ; // ,7,8,9,10};

  cout << "\n sizeof(cArr)= " << sizeof(cArr) ;

  cout << "\n sizeof(cppArr)= " << sizeof(cppArr) ;

  cout << "\n capacity(cppVec) = "   << cppVec.capacity() ;
  cout << "\n sizeof(cppVec) = "   << sizeof(cppVec) ;
  cout << "\n sizeof(cppVec) = "   << sizeof(cppVec) + sizeof(int)*cppVec.capacity() ;
  cout << "\n               = sizeof(cppVec): " << sizeof(cppVec) ;
  cout << "\n               + sizeof(int)* cppVec.capacity(): "   << sizeof(int)* cppVec.capacity() ;

  cout << endl;

}
