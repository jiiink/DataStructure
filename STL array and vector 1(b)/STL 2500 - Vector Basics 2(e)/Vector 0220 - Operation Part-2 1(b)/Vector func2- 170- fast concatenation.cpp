#include <vector>
#include <iostream>
#include <iterator>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main( ) {
  vector<int> dest{1,2,3,4,5};
  vector<int> src{6,7,8,9,10};

  // Move elements from src to dest.
  // src is left in undefined but safe-to-destruct state.
  dest.insert(
      dest.end(),
      make_move_iterator(src.begin()),
      make_move_iterator(src.end())
  );

   allout("dest[]= ", dest ) ;


  return 0;
}
