#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<","
using namespace std;



int main() {

    vector<int> vec { 1, 4, 5, 22, 33, 2, 11, 89, 49 };

    allout ("\n before clear vec.clear(): vec[]= ",vec ) ;
    cout <<  "\n Before clear *vec.end()-1 = " << vec.back() << endl ;

    vec.clear() ;
    allout ("\n after clear vec.clear(): vec[]= ",vec ) ;
    cout <<  "\n After clear *vec.end()-1 = " << vec.back() << endl ;
    cout <<  "\n After clear vec[4]= " << vec[4] << endl ;
    cout <<  "\n Clear 이후 size() = " << vec.size() ;
    cout <<  "\n Clear 이후 capacity() = " << vec.capacity() ;
    if( vec.empty() ) cout << "\n 오 예 ,,, vec의 빈 vec " ;

} // end of main( )
