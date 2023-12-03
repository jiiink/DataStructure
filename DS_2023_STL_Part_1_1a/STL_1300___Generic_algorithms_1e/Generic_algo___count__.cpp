
#include <iostream>     // cout
#include <algorithm>    // count
#include <vector>       // vector
#include <array>        // vector

using namespace std ;

int main () {


  int myints[] = {10,20,30,30,20,10,10,20, 10};   // 9 elements
  int mycount = count (myints, myints+9, 10);
  cout << "10 appears " << mycount << " times.\n";

  array<int,8> yourints {10,20,30,30,20,10,10,20, 45};

  mycount = count ( yourints.begin(),  yourints.end(), 30);
  cout << "30이 나타난 횟수는 " << mycount << " times.\n";


  vector<int> myvector (myints, myints+8);

  mycount = count (myvector.begin(), myvector.end(), 20); // iterator를 활용
  cout << "20 appears " << mycount  << " times.\n";

  mycount = count (myvector.begin(), myvector.end(), 99);
  cout << "99 appears " << mycount  << " times.\n";

  return 0;
}

