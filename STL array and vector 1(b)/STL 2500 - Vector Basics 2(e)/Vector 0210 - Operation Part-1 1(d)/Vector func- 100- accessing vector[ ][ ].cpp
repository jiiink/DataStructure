#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main(){

  vector <string>  orange = { "소주", "순대", "곱창", "두부" } ;
  vector < int >  mymy[4] = { {2,3,4}, {10}, {9,8,7,6}, {-1,-2,-100} } ;   //array
  vector <string> apple ;
  vector < vector<string> > youyou = { {"Aa", "Ab"}, {"B"}, {"Ca","Cb","Cc","Cd"}, {"P", "N", "U"} } ;  // vector

  cout << "1. " << mymy[3][2] << "\n" ;
  cout << "2. " << youyou[2][2] << "\n" ;

  youyou.push_back( orange ) ;
  apple = *(youyou.end()-1) ;
  cout << "3. " << *(apple.end()-1) << "\n" ;
  cout << "4. " << youyou.at(2).at(0) << "\n" ;



}//End of Main
