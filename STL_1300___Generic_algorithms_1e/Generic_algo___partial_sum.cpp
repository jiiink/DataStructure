#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define N 8
using namespace std;


int main() {

  array<int,N> x1 {1,2,3,4,5,6,7,8}, x2 ;

  partial_sum(&x1[0], &x1[N], &x2[0]);

  allout( "x1[] = ", x1 ) ;
  allout( "x2[] = ", x2 ) ;

  return 0;
}
