
#include <algorithm>  // find
#include <iostream>   // cout
#include <vector>     // vector
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  int myints[] = {10, 20, 30, 40};
  int* p;

  p = find (myints, myints + 4, 30);
  if (p != myints + 4)
    cout << "\n 원소가 myints[]에 있음 : " << *p << '\n';
  else
    cout << "\n 원소가 myints[]에 없당께 :";


  vector<int> myvector { 45, 33, 55, 11, 3, 55, 88, 99, 100, 17} ;
  vector<int>::iterator it;

  it = find(myvector.begin(), myvector.end(), 30);
  if (it != myvector.end())
    cout << "\n 원소가 myvector[]에 있음 : " << *it << '\n';
  else
    cout << "\n 원소가 myvector[]에 없다니까용: ";

  return 0;
}
