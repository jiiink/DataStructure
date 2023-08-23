#include <iostream>     // cout
#include <algorithm>    // generate
#include <vector>       // vector
#include <ctime>        // time
#include <cstdlib>      // rand, srand
#define allout(MSG,X)   cout<<"  "<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;


int RandomNumber () { return (rand()%100); }


struct c_sequal {
  int current;
  c_sequal() {current=0;}
  int operator()() {return ++current;}
} SerialNumber;

int main () {
  srand ( unsigned ( time(0) ) );

  vector<int> myvector(15) ;  // 15개를 미리 준비한다.

  generate_n (myvector.begin(), 5, RandomNumber); // 5개만 만듬,
  allout("\n 1. Random  myvector[]= ", myvector ) ;

  generate_n (myvector.begin(), 8, SerialNumber);    // 8개를 만듬,
  allout("\n 1. Sequential myvector[]= ", myvector ) ;


  return 0;
}
