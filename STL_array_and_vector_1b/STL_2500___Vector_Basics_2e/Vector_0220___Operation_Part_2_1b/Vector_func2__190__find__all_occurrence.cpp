#include <algorithm>  // find
#include <iostream>   // cout
#include <vector>     // vector
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

vector<int> find_all( vector<int> V, int K) {
    vector<int>::iterator itr;
    vector<int> result ;

    itr = V.begin();
    for(auto w : V){
        if( w == K ) result.push_back( itr - V.begin());
        itr++ ;
    } // end of for(w)
    return( result ) ;
} //  end of fill_all( )

int main() {


  vector<int> vec { 13, 45, 55, 11, 33, 55, 88, 99, 55, -43, 17} ;
  vector<int>::iterator it;
  vector<int> alls ;

  alls = find_all(  vec, 55) ;
  allout(" alls[ ] : ", alls ) ;



  return 0;
}
