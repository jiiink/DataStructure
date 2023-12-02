#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;

bool myfunction (int i, int j) { return i<j; }

int main () {
  vector<int> vec1 {5,10,15,20,25,30,35,40,45,50};
  vector<int> vec2 {40,30,20,10};

  sort ( vec1.begin(), vec1.end() );
  sort ( vec2.begin(), vec2.end() );

  if ( includes( vec1.begin(), vec1.end(),vec2.begin(), vec2.end() ) )
    cout << "vec1[]은 vec2[]를 포함하고 있습니다. \n";

  // using myfunction as comp:
  if ( includes(vec1.begin(), vec1.end(),vec2.begin(), vec2.end(), myfunction) )
    cout << "container includes continent!\n";

  return 0;
}
