#include <iostream>
#include <unordered_map>   // 속도가 map<>보다 더 빠름. 진짜 map
#include <iomanip>
using namespace std ;


int main () {

  unordered_map <string,string> mymap;

  //mymap.reserve(10);  // 처음에 100개의 map을 준비함.

  mymap = {{"Australia","Canberra"},{"U.S.","Washington"}, \
           {"France","Paris"}, {"Korea", "Seoul"}, {"Korea2", "부산"}, \
            {"Germany", "Bonn"}, {"Papua", "NewGiene"}};

  cout << "mymap의 내용: ";
  for ( auto it = mymap.begin(); it != mymap.end(); ++it )
       cout << "\n " << it->first << " : " << it->second;

  cout << "\n mymap bucket[ ]:\n";
  for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
    cout << "bucket #" << setw(2) <<  i << " contains:";
    for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it )
      cout << " " << local_it->first << ":" << local_it->second << "&";
    cout << endl;
  }

  return 0;
}
