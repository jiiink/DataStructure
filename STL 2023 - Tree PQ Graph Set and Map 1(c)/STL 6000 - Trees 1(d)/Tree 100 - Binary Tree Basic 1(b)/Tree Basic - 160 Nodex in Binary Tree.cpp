#include <bits/stdc++.h>
#define mout(msg,lx)  cout<< "\n " << msg<<": " ; for(auto _w : lx ) cout<< " " << _w ;
using namespace std;

struct Nodex {
    string name ;
    list <Nodex>::iterator rtree   ;  // 오른쪽 subtree를 가르킴.
    list <Nodex>::iterator ltree   ;  // 왼쪽 subtree를 가르킴.
} nx, ny ;

int main(){

    list <Nodex> Bitree ; // 모든 노드가 vector에 들어감.
    list <Nodex>::iterator tit ;

    nx.name="banana" ;

    Bitree.push_back( nx ) ;

    ny = Nodex();

    ny.name="Tomato" ;

    Bitree.push_back( ny) ;
    tit =  Bitree.end() ;
    tit-- ;
    nx.rtree = tit ;


}  // end of main( )


