#include<iostream>
#include<map>
using namespace std;

void allvalues(multimap<int, string> X, int Key ){

    if( X.find(Key) == X.end()) {
        cout << "\n [ ", Key , " ], 이런 Key는 없습니데이. 끝 " ;
        cout << "\n [ ", Key , " ], 이런 Key는 없습니데이. 끝 " ;
    }
    cout << "\n\n Key가 "<< Key << "인 value를 모두 출력합니다." ;
    for(auto iter = X.equal_range(Key).first; iter != X.equal_range(Key).second; iter++){
        cout << "\n [" << iter->first << ", " << iter->second << "] " ;
    }
    return ;
} // end of all values

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


    allvalues( mm, 999 ) ;
    allvalues( mm, 40 ) ;
    allvalues( mm, 70 ) ;


    return 0;
}


