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

  vector<int> myvector (8);

  generate (myvector.begin(), myvector.end(), RandomNumber);
  allout("\n 1. Random  myvector[]= ", myvector ) ;

  generate (myvector.begin(), myvector.end(), SerialNumber);
  allout("\n 1. Sequential myvector[]= ", myvector ) ;


  return 0;
}
