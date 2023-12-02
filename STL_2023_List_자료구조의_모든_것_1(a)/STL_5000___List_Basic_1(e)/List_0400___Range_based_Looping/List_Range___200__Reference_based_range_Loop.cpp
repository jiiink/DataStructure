#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto w : lx ) cout<< w << " , " ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}

using namespace std ;


void put_dung( list<string> &L, string X ){ // reference로 받아야 함.
    int i = 0 ;
    for (auto &w : L ) {   // 원소 역시 reference로 받아야 함.
            w += X ;
            cout << w << ": " ;
    }
} // end of put_dung( )


void put_bob( list<string> L, string X ){ // reference로 받아야 함.
    int i = 0 ;
    for (auto w : L ) {   // 원소 역시 reference로 받아야 함.
            w += X ;
            cout << w << ": " ;
    }
} // end of put_dung( )

int main() {

    list<string> myl { "개", "돼지", "말", "강아지", "파리"} ;


    put_dung( myl, "똥") ;
    allout(" myl의 내용 ", myl ) ;

}

