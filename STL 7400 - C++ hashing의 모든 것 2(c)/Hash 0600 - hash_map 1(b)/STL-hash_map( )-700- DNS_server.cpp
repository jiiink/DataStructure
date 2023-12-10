//   A Simple DNS server 구축하기 : hash를 이용해서 가장 빠르게 찾아낼 수 있다.

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

struct {const char * first; unsigned second; } sites[] = {
     {"www.pusan.co.kr",    0x10203040}, // 16진법으로 표현을 합니다.
     {"www.lpacampus.com",  0x20304050},
     {"www.microsoft.com",  0x99999999},
     {"www.borland.com",    0xbbbbbbbb},
     {"algorigene.ac.kr",   0x067ab050},
     {"pearl.pusan.ac.kr",  0xb7456345},
     {"www.naver.com",      0x0cc2f738},
     {"www.amazon.com",     0xf5760788},
     {"www.maxplus.com",    0x12345678}, // 이런 것이 한 1000만개 정도 된다고 해보자.
};

int main(){
     map<string,unsigned> dns;
     // int i;

     for (int i=0; i<9; i++) {
          dns[sites[i].first]=sites[i].second;
     }

     dns["www.beer.com"] = 0x16348678 ;
     map<string,unsigned>::iterator it;
     it=dns.find("www.amazon.com");

     if (it == dns.end() ) { cout << "등록되지 않은 사이트입니다." << endl; }
     else                  { cout << it->first << "의 주소는 " << it->second << "입니다." << endl; }
     // end of else

     string instr ;
     instr = "www.beer.com" ;
     cout << "오 예 " << dns[instr] ;
} // end of main ( )

