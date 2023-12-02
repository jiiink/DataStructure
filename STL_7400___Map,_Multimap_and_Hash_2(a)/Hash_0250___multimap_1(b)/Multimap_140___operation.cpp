#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    multimap <int, int> gquiz1;  // empty multimap container

    gquiz1.insert(pair <int, int> (1, 40)); // 6개를 삽입
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (6, 50));
    gquiz1.insert(pair <int, int> (6, 16));


    multimap <int, int> :: iterator itr;
    cout << "\n multimap gquiz1[ ] : \n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;

    // 추가하고 정렬이 되어있는지 확인해보십데이.
    gquiz1.insert(pair <int, int> (4, 51));
    gquiz1.insert(pair <int, int> (5, 15));

    // printing multimap gquiz1 again

    cout << "\n 추가후 multimap \n" ;

    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;

    // 멀티맵 gquiz1을 새로운 멀티맵 gquiz2으로 assign하기 , 이게 됩니다.
    multimap <int, int> gquiz2(gquiz1.begin(), gquiz1.end());

    // print all elements of the multimap gquiz2
    cout << "멀티맵 gquiz2 내용: " ;
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // gquiz2에서 value가 30이하인 것은 모두 지우기
    cout << "\n gquiz2 after removal of elements less than key=3 : \n";

    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    //lower bound and upper bound for multimap gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : " << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl;
    cout << "gquiz1.upper_bound(5) : " << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl;

    return 0;
}
