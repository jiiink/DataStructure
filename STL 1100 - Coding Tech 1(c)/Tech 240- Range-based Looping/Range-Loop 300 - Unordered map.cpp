#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

#define show(t,vx) \
    do { \
        cout<<"\n" << (t) ; \
        for( auto s : vx ) cout << " " << s ; \
    } while(0)


using namespace std ;

int main() {
    cout << "range base for - vector" << endl;

    vector<int> NumberList {33, 44, 55, 66, 99, 100};

    show("Numberlist: \n" , NumberList) ;


    cout << "\n range base for - unordered_map" << endl;

    unordered_map<int, string> NumString;
    NumString = { {1,"하루"}, {2,"이틀"}, {3,"사흘"}, {4,"나흘"}, {8,"여드레"} } ;


    for( auto i : NumString ) {
        cout << "key : " << i.first << ", value : " << i.second << endl;
    }

    return 0;
}
