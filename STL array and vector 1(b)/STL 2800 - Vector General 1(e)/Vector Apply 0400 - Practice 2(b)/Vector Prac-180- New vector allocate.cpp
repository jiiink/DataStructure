#include <bits/stdc++.h>
using namespace std;

int main () {

  vector <int>  ivec ;
  vector <int> *pvec ;        // pointer to vector<int>
  vector < vector<int> * > vecvec ;

     for(int i=1; i < 10; i++) {
        if (i%2 == 0 ){
            cout << "새 vector를  하나 더 만들어 봅시다. " << endl ;
            pvec = new  vector<int> ;
            pvec->push_back( 100* i) ;  // 새로운 벡터는 reference이므로 pointer로 처리해야 함. ->
            vecvec.push_back( pvec ) ;
            cout << "vector size= " << vecvec.size( ) << endl ;
        }
     }

  return 0;
}

