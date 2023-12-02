#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<pair<int, int> > vec1 = { {1, 0}, {0,9}, {3,1}, {-3,9},
                                     {3, 0}, {2,9}, {3,5}, {-3,8}  };

    vector<pair<string, string> > vec2 = {
                                    make_pair("소", "말"),
                                    make_pair("개", "땅"),
                                    make_pair("소", "용"),
                                    make_pair("개", "말"),
                                    make_pair("종", "병" ) ,
                                    make_pair("개", "용"),
                                    make_pair("소", "병" ) ,
                                    make_pair("종", "양")};

   for(auto w: vec1 ){
        cout << "\n vec1 (" << w.first << ", " << w.second << ")";
   }

   for(auto w: vec2 ){
        cout << "\n vec1 (" << w.first << ", " << w.second << ")";
   }

   cout << "\n\n After Sorting -\n\n" ;
   sort( vec1.begin(), vec1.end() ) ;
   for(auto w: vec1 ){
        cout << "\n sorted vec1 (" << w.first << ", " << w.second << ")";
   }

   sort( vec2.begin(), vec2.end() ) ;
   for(auto w: vec2 ){
        cout << "\n sorted vec1 (" << w.first << ", " << w.second << ")";
   }


} // end of main( )
