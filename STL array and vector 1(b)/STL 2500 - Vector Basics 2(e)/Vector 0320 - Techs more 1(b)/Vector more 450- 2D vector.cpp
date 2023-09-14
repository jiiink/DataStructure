
#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>

using namespace std ;

int main() {
   vector < vector<int> > vv { {99,100}, { -12 }, { 72, 77, 76 }, { 3, 2, 1 ,0 } };


   cout<<" \n 2차원 벡터 간단 출력 :"<< endl;
   int i,j ;
   i=j=0 ;
   for(auto avec : vv ) {
        for(auto w : avec ) {
            printf("\n vv[%d ][%d)] = %d", i, j, w) ;
            ++j ;
        }
        j=0 ; ++i ; cout << "\n " ;
   }

   return 0;
}
