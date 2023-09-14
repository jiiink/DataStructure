#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

#define N 6000

float T[N][N];

void setT(){

}

int main() {
    for(int k = 0 ; i < N ; k++){
        cout << "\n k= " << i ;
        for(int i=0; i < N ; i++){
           for(int j=0; j < N ; j++){
            T[i][j] = i+j ;
        }
    }
    cout << "\n Done!" ;
} // end of main()
