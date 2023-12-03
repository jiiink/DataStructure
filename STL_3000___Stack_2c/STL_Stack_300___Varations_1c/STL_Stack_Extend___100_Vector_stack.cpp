#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void print_SVEC( stack <  vector<string> > S ){
   int i = 0 ;
   while (!S.empty()) {
      allout( to_string(i++), S.top( ) ) ;
      S.pop();
  } // end of while( )

}

int main() {

     vector<string>  meal ;
     stack <  vector<string> > SVEC ;

     meal.push_back("pizza") ;
     meal.push_back("cola") ;
     meal.push_back("pickle") ;
     SVEC.push( meal ) ;

     meal.pop_back() ;
     meal.push_back("Beer") ;
     meal.push_back("Soju") ;
     SVEC.push( meal ) ;
     meal.clear();

     meal.push_back("Banana") ;
     meal.push_back("Milk") ;
     SVEC.push( meal ) ;

     meal.pop_back() ;
     meal.push_back("Corn") ;
     meal.push_back("Gum") ;
     SVEC.push( meal ) ;

     SVEC.pop() ;
     SVEC.pop() ;
     cout << SVEC.top()[1] ;

     return 0;
}
