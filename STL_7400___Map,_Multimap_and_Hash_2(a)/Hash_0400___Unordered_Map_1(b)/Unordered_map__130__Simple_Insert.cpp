#include <iostream>
#include <unordered_map>
#include <string>

using namespace std ;
int main() {

    unordered_map<string, int> wordMap;


    wordMap.insert( { "First", 1 });
    wordMap.insert(	{ "Second", 2 });
    wordMap.insert(	{ "Third", 3 });


    wordMap["Third"] = 8;  // °ãÃÄ¾²±â


    for (pair<string, int> element : wordMap)
        cout << element.first << " :: " << element.second << endl;

    return 0;
}

