#include <bits/stdc++.h>
using namespace std;


int main () {
  string DNA = "agtggatagaatatcccctagagaatatttaaatata" ;
  list< char > genome = { 'a', 'g', 't', 't', 'c', 'c', 't'} ;
  list< char > sapiens( DNA.begin(), DNA.end()) ;
  string hx ;

  hx = "" ;
  for(auto w : genome){
    hx += w ;
  }
  cout << hx ;
  int i = 0;
  for(auto w : sapiens ){
      i++ ;
    cout << "\n sapien( " << i << " )= " << w  ;
  }

}



