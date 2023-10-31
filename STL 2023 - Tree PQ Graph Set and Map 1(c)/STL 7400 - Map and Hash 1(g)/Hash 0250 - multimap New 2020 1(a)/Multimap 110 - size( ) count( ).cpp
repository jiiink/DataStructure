#include<iostream>
#include<map>

using namespace std;

int main(void){
    multimap <int, int> mm;

    mm.insert(pair<int, int>(60, 6));
    mm.insert(pair<int, int>(30, 3));
    mm.insert(pair<int, int>(70, 7));
    mm.insert(pair<int, int>(90, 9));
    mm.insert(pair<int, int>(40, 4));
    mm.insert(pair<int, int>(40, 2));
    mm.insert(pair<int, int>(50, 5));
    mm.insert(pair<int, int>(40, 8));


    multimap<int, int>::iterator iter;

    cout << "\n mm.size() = " << mm.size() ;
    cout << "\n mm.count(40) = " << mm.count(40) ;

    // multimap에서 이건 안됨. // cout << "\n mm[60] = " << mm.at(60) ;


    cout << "\n 전체를 모두 출력해보자. \n" ;
    for(iter = mm.begin(); iter != mm.end(); iter++){
        cout << "[" << iter->first << ", " << iter->second << "] " ;
    }

    cout << endl << endl;

    //인자 2개 추가
    mm.insert(pair<int, int>(40, 44));
    mm.insert(pair<int, int>(40, -983));


    cout << "mm.size() : " << mm.size() << endl;
    cout << "mm.count(40) : " << mm.count(40) << endl;

    cout << "\n 추가 후 다시 전체를 출력해보자. \n" ;
    for(iter = mm.begin(); iter != mm.end(); iter++){
        cout << "[" << iter->first << ", " << iter->second << "] ";
    }


    return 0;
}


