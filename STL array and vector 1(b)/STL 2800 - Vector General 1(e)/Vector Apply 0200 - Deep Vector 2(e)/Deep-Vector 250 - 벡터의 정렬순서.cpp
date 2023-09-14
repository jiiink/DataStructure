
#include <vector>
#include <algorithm>  // you should this for "sort( )" algorithm
#include <iostream>
using namespace std;

void show2Dvec(  vector < vector<int>> X) {
     int i = 0 ;
     cout << "\n --- Show vector< vector<int> > -----" ;
     for(auto w  : X ) {
        cout << "\n " << ++i << ":" ;
        for( int item : w) cout << " " << item << " -" ;
     }

}  // end of sho2Dwvec()


int main() {

	 vector <int> vn = {  } ;
	 vector <int> va = { 1,2,3,5 } ;
	 vector <int> vb = { 1,2,3 } ;
	 vector <int> vc = { 7,0,1 } ;
      vector <int> vd = { 7,9 } ;
      vector <int> ve = { 7,9,5 } ;
      vector < vector<int> > All { va, vb, vc, vd, ve, vn };


     sort( All.begin(), All.end()) ; // 전체를 sorting 함.
     show2Dvec( All ) ;

     // 역순으로 sorting할 경우에는 greater<>( ) 함수를 사용하여 비교
     sort( All.begin(), All.end(), greater<>() ) ;
     show2Dvec( All ) ;

}
