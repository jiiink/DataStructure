#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< "\n " << w ;
using namespace std;

typedef  string Word ;
typedef  list <Word> Statem ;

int main () {

    Statem ktext {"자료구조는", "정말", "재미있는", "과목인가?", "머라꼬?"} ;
    outlist("한글 문자열 리스트", ktext ) ;

    return 0;
}
