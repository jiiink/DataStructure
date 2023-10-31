#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {
    map   <string, int> Employees;

    vector<string>     itemKeys;


    Employees["Mike"   ] =  54;
    Employees["Charlie"] =  74;
    Employees["Dannis" ] = 534;
    Employees["Sophia"]  =  73;
    Employees["Freddie"] = 342;
    Employees["JakeM"]   =  21;

    for (const auto& [key, _] : Employees) {
        itemKeys.push_back(key);
    }

    allout( "Keys of Employees[]: ", itemKeys ) ;

}
