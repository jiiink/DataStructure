#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

    vector<string> vec = { "Soju", "Wine", "Beer", "Whiskey" };

    allout("1. vec[]의 초기 ", vec ) ;

    vec.clear();
    allout("2. vec.clear( ) 후의 vec[] ", vec ) ;

    cout << "\n3. vec.clear( ) 후의 vec.size() = " << vec.size()  ;

 //  for (int i = 0; i < (int)vec.size() - 1; i++) // Error 발생
    cout << "\n for loop을 모두 출력 \n" ;
    for (int i = 0; i < (int)vec.size() - 1; i++)
        cout << vec[i] << ' ';


    return 0;
}

/*
vec.size() - 1를 loop안에서 사용하면
*/
