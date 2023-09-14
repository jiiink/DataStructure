#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

int main() {


  char name[] = "George Foreman";
  vector<char> George(name, name + 9);

  vector<char> anotherGeorge(George.begin(), George.end());
  allout ("George vector ", George ) ;
  allout ("Another George ", anotherGeorge ) ;

  vector<char> son1 (George); // Uses copy constructor
  vector<char> son2 = George;

  allout ("son1 ", son1 ) ;
  allout ("son2 ", son2 ) ;

  return 0;
}
