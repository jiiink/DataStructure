// Hashing Examples 간단한 해슁 함수의 예

#include <iostream>
#include <vector>
#include <algorithm>
#include <hash_map>
#include <string>

using namespace std;
using namespace __gnu_cxx;

int main() {

        hash_map <const char*, int > months;
        hash_map <string, int      > xmon;   // 이렇게 하면 오류, 반드시 const *char 사용
        string mys ;

        months["january"    ] = 31;
        months["february"   ] = 28;
        months["march"      ] = 31;
        months["april"      ] = 30;
        months["may"        ] = 31;
        months["june"       ] = 30;
        months["july"       ] = 31;
        months["august"     ] = 31;
        months["september"  ] = 30;
        months["october"    ] = 31;
        months["november"   ] = 30;
        months["december"   ] = 31;

        cout << "september ->  " << months["september"   ] << endl;
        cout << "없는 경우 ->  " << months["fapril"      ] << endl;
        cout << "june      ->  " << months["june"        ] << endl;
        cout << "november  ->  " << months["november"    ] << endl;

        // xmon["january"]= 31 ; // 이렇게 하면 오류, 반드시 const로 사용

        return EXIT_SUCCESS;
}
