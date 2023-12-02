#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    vector< array<int,3> > devec    { {3,4,5}, {32, 32, 33}, {7, 77, 77 } } ;

    for(auto A: devec) {
        cout << "\n row vector: " ;
        for(int i=0 ; i< 3 ; i++ ){
            cout << A[i] << ", " ;
        }
    }

    array<int, 3> myarr = {99, 100, 101};

    devec.insert(devec.begin(), myarr);
    devec.pop_back();

    for (auto& item : devec) {
        cout << item[0] << " " << item[1] << " " << item[2] << endl;
    }
} // end of main()
