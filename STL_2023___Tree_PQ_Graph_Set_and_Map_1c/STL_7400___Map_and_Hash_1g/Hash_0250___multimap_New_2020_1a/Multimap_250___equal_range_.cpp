#include<iostream>
#include<map>
using namespace std;

int main(void){

    multimap<int, string> mm;

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
        cout << "\n mm[" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl << endl;



    cout << "\n 중복 키 값이 존재하는 40 의 인자 출력." ;
    for(iter = mm.equal_range(40).first; iter != mm.equal_range(40).second; iter++){
        cout << "\n [" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl;



    // 인자 >= equal_range.first
    // 인자 < equal_range.second
    // [ first, second )  개폐구간.
    pair<multimap<int, string>::iterator,
          multimap<int,string>::iterator> pair_iter = mm.equal_range(40);


    cout << "\n pair_iter.first : "
        << (pair_iter.first)->first << ", " << (pair_iter.first)->second << endl;
    cout << "\n pair_iter.second: "
        << (pair_iter.second)->first << ", " << (pair_iter.second)->second << endl;

    //여기서 pair_iter.first 는 이전 Test2 에서 lower_bound 를 가리키는 iterator와 동일합니다.
    //여기서 pair_iter.second 는 이전 Test2 에서 upper_bound 를 가리키는 iterator와 동일합니다.

    return 0;
}


