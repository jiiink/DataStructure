#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> Inn {567, 45, 11223, 8930, -9292, 382323, -5, 7758383, 5623, 234324902} ;
    cout << "\n\n 형식 1 " ;
    for (auto w : Inn ){
         cout << "\n " << w ;
    }


    cout << "\n\n 형식 2 - setw(12)" ;
    for (auto w : Inn ){
             cout <<  "\n" << fixed << setw(12) << w ;
    }


    cout << "\n\n 형식 3 - setw(10) << left " ;
    for (auto w : Inn ){
         cout << "\n" << fixed << setw(12) << left << w ;
    }

    cout << "\n\n 형식 4 - setw(10) << right " ;
    for (auto w : Inn ){
         cout << "\n" << fixed << setw(12) << right << w ;
    }



}
