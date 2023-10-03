// 입력화일 ticketOO.inp에 이름과 그 사람이 쓸 시간에 기록되어 있다.
// 그 화일의 첫 숫자 N은 원소의 갯수를 나타낸다.
#include <iostream>
#include <fstream>
#include <deque>
#include <string>

using namespace std;
class person{
      public:
      string name;
      int    eTime;
      person(string rname, int rTime){
                    name = rname;
                    eTime = rTime;
      }
};

int main(){
    deque <person> mainQ;
    ifstream fin("ticket10.inp");
    int numOfPeople;
    string tempName;
    int tempTime;
    fin >> numOfPeople;

    for(int i = 0 ; i < numOfPeople ; i++){
            fin >> tempName >> tempTime;
            mainQ.push_back(person(tempName,tempTime));
            cout << "\n Name = " << tempName << "  Time = " << tempTime  ;

    } // INP 로딩 및 mainQueue에 자료 저장 완료.


    fin.close();
    return 0;
}

