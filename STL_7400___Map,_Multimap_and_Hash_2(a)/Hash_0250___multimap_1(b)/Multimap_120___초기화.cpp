#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#define  SKIP      cout<<endl
using namespace std ;

int main() {

    multimap <string, string> myumm = {
    { "apple","red" },
    { "apple","green" },
    { "orange","orange" },
    { "apple","²­Á¤»ö" },
    { "tomato","dark-red" },
    { "µþ±â","red" }   };

    cout << "myumm contains:";
    for (auto it = myumm.begin(); it != myumm.end(); ++it)
       cout << "\n " << it->first << ":" << it->second;


   return 0;
}
