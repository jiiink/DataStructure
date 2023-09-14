

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<","
#include <iostream>
#include <vector>
using namespace std;

int main () {

  vector<int> vect = {10, 20, 30, 40, 50, 99};

  for (auto i = vect.crbegin(); i != vect.crend(); i++)
    cout << ' ' << *i;  //printing results

  cout << '\n';
  return 0;
}

