#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main(){

  vector <string>  sulpan = { "김치", "소주", "순대", "두부" } ;

  sulpan.push_back( "막걸리" ) ;
  allout(">> sulpan:  ", sulpan ) ;

  while (!  sulpan.empty())   {
      // cout << sulpan.back();
      sulpan.pop_back();
      allout(">> sulpan:  ", sulpan ) ;
  }


}//End of Main
