#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "

using namespace std ;


int main() {

   vector <int> Count {1,2,3,4,5} ;
   vector < vector<int> > dynavec ;
   vector <int> *mymy ;


  for(auto w: Count){
     mymy = new vector<int> ( ) ;  //새로 stack 한 개를 만듬
     mymy->push_back( w ) ;
     mymy->push_back( w*w ) ;
     dynavec.push_back( *mymy ) ;
  }

  for(auto w: dynavec){
      allout("dynavec[]: ", w ) ;
  }
}
