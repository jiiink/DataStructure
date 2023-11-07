#include <iostream>
#include <string>
#include <map>
using namespace std;

void showmap(  string msg, map<int, string> X){
    cout << "\n >> " << msg << " << \n" ;
    for (auto iter = X.begin(); iter != X.end(); ++iter) {
        cout << "key : " << iter->first << " , value : " << iter->second << '\n';
    }
    cout << "\n" << "\n";


}
int main() {
    map<int, string> ma;

    cout << "value를 string 으로" << '\n' << '\n';
    ma.insert( make_pair(33, "red")   );
    ma.insert( make_pair(11, "blue")  );
    ma.insert( make_pair(92, "orange"));
    ma.insert( make_pair(41, "purple"));
    ma[50] = "black";  // operator [] 를 활용한  insert
    showmap( "Step 1: ", ma) ;

    map<int, string>::iterator miter ;
    miter = ma.begin() ;
    advance( miter, +3) ;
    ma.insert( miter, make_pair(83, "Rose") );
    showmap( "Step 2: ", ma) ;

}
