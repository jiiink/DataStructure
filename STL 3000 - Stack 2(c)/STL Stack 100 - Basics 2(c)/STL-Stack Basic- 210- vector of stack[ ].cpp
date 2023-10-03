#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "

using namespace std ;


int main() {

   vector <int> Count {1,2,3,4,5} ;
   vector < stack<int> > Svec ;
   stack <int> *mymy ;


  for(auto w: Count){
     mymy = new stack<int> ( ) ;  //새로 stack 한 개를 만듬
     Svec.push_back( *mymy ) ;
  }
}

