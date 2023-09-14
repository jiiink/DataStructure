#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv( string MSG, vector< vector<int> > Q ){
    int i,j,k ;
    i = j = 0 ;
    cout << "\n >> showvv() : " << MSG << "; \n" ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        cout << "\n";
        i++; j=0 ;
    }
} // end of showit( )


int main() {
    vector< vector<int>> X { {3,4,5}, {2,3}, {6}, {10,11,12,13}, {22,23} } ;
    int tmp ;
    showvv( "Step1 ", X ) ;
    vector<int>::iterator vit ;
    for(auto it=X.begin()+1; it!= X.end(); it++){
            if ( (it)->size() == 0 ) break ;
            tmp = (it)->front();
            (it)->erase( (it)->begin() );
            (it-1)->push_back( tmp ) ;
    }

    auto it = X.begin();
    tmp = (it)->front();
    (it)->erase( (it)->begin() );
    (X.end()-1)->push_back( tmp ) ;

    showvv(  "Step2 ",X ) ;
} // end of main()
