/*
 unordered_map vs map :
 map (like set) is an ordered sequence of unique keys whereas in unordered_map
 key can be stored in any order, so unordered.
 Map is implemented as balanced tree structure that is why it is possible
 to maintain an order between the elements (by specific tree traversal).
 Time complexity of map operations is O(Log n) while for unordered_set,
 it is O(1) on average.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map <string, double> umap;  // 순서는 무시된다.

    umap["악당"  ] = 3.14;
    umap["Zerg"  ] = 1.414;
    umap["Protos"] = 1.732;
    umap["Teran" ] = 2.302;
    umap["삼돌이"] = 1.0;

    // inserting value by insert function
    umap.insert(make_pair("Monster", 2.718));

    string key = "Zerg";


    if (umap.find(key) == umap.end())  cout << key << " not found\n\n";
    else  cout << "Found " << key << "\n\n";

    key = "lambda";
    if (umap.find(key) == umap.end()) cout << key << " not found\n";
    else  cout << "Found " << key << endl;

    unordered_map<string, double>:: iterator itr;

    cout << "\n 모든 원소를 출력해보자.  \n";
    int i = 0 ;
    for ( itr = umap.begin(); itr != umap.end(); itr++ ) {
        cout << ++i << ": " << itr->first << " ==> " << itr->second << endl;
    }
}

