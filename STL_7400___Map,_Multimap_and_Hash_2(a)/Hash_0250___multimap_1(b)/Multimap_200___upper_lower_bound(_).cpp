#include<iostream>
#include<map>
using namespace std;

int main(void){

    multimap <int, string> mm;

    mm.insert(pair<int, string>(60, "C"));
    mm.insert(pair<int, string>(30, "C++"));
    mm.insert(pair<int, string>(40, "Linux"));
    mm.insert(pair<int, string>(40, "다람쥐"));
    mm.insert(pair<int, string>(40, "갈매기"));
    mm.insert(pair<int, string>(70, "JAVA"));
    mm.insert(pair<int, string>(40, "Ubuntu"));
    mm.insert(pair<int, string>(90, "Unix"));
    mm.insert(pair<int, string>(40, "CentOS"));


    multimap<int, string>::iterator iter;

    for(iter = mm.begin(); iter != mm.end(); iter++){
        cout << "[" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl << endl;



    cout << "\n 중복 키 값이 존재하는 40 의 인자 출력. \n" ;
    for(iter = mm.lower_bound(40); iter != mm.upper_bound(40); iter++){
        cout << "\n mm[" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl;



    // 인자 >= lower_bound
    // 인자 < upper_bound
    // [ lower_iter, upper_bound )  개폐구간.
    multimap<int, string>::iterator lower_iter = mm.lower_bound(40);
    multimap<int, string>::iterator upper_iter = mm.upper_bound(40);

    cout << "lower_iter : " << lower_iter->first << ", " << lower_iter->second << endl;
    cout << "upper_iter : " << upper_iter->first << ", " << upper_iter->second << endl;


    return 0;
}


