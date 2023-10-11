
#include <iostream>
#include <forward_list>
using namespace std ;

struct ITEM {
    ITEM(int nItemID) {
        this->nItemID = nItemID;
    }
    int nItemID;
};

void print(forward_list< ITEM >& flist) {
    for( auto& item : flist ) {
        cout << item.nItemID << ", ";;
    }

    cout << endl;
}

int main() {
    forward_list< ITEM > flist;

    for( int i = 1; i <= 10; ++i ) {
        flist.push_front( -i );
    }

    print(flist);


    cout << "\n insert_after ITEM(300) 추가" << endl;

    flist.insert_after( flist.begin(), ITEM(300) );

    print(flist);


    cout << "\n emplace_after를 사용하여 400 추가" << endl;
    flist.emplace_after( flist.begin(), 400 );

    print(flist);


    cout << "\n emplace_front를 사용하여 500 추가" << endl;
    flist.emplace_front( 500 );

    print(flist);

    return 0;
}

