/*
vector::at() The function automatically checks whether n is within
the bounds of valid elements in the vector, throwing an out_of_range
exception if it is not (i.e., if n is greater than, or equal to, its size).
This is in contrast with member operator[], that does not check against bounds.
*/

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <stdexcept>      // std::out_of_range

using namespace std;

int main () {
  vector<int> myvector (10);   // 10 zero-initialized ints

  for (unsigned i=0; i<myvector.size(); i++)
    myvector.at(i)=i*i;

  allout("myvector[]=", myvector) ;

  try { myvector.at(20)=100;   }   // vector::at throws an out-of-range
  catch (const out_of_range& oor) {
    cerr << "\n Out of Range 오류발생. 정신을 차리자!!!\n" << oor.what() << '\n';
  }
  return 0;
}

