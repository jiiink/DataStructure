
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {

	 vector <int> vnull = {  } ;
	 vector <int> va = { 1,2,3,5 } ;
	 vector <int> vb = { 1,2,3 } ;
	 vector <int> vc = { 7,0,1 } ;
     vector <int> vd = { 7,9 } ;
     vector <int> ve = { 7,9,5 } ;
     vector < vector<int>> All { va, vb, vc, vd, ve, vnull };


     sort( All.begin(), All.end()) ; // 정체를 sorting 함.

     for(auto w  : All ) {
        cout << "\n :" ;
        for( int item : w) cout << " - " << item ;
     }


}
