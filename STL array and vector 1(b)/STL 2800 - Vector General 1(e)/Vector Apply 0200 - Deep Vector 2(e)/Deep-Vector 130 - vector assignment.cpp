#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {
    vector <int>    veca = {  10,    20,   30,   40,   50 }, vecb ;
    vector <double> vecc = { 0.01, 0.02, 0.03, 0.04, 0.05 }, vecd ;

    vecb = veca ;
    vecd = vecc ;

    allout("veca[] ", veca) ;
    allout("vecb[] ", vecb) ;
    allout("vecc[] ", vecc) ;
    allout("vecd[] ", vecd) ;

    //    vecd = veca; //  vector type이 다르면 assign이 되지 않습니다.


} // end of main( )
