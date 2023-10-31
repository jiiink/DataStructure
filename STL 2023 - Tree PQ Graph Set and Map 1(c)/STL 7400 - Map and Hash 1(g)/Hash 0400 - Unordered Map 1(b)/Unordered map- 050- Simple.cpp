#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
  unordered_map<string,string> mymap = { // 영어, 이태리어 번역
            {"house","maison"},
            {"apple","pomme"},
            {"tree","arbre"},
            {"book","livre"},
            {"door","porte"},
            {"grapefruit","pamplemousse"}
  };

    unordered_map<string,string> mymap2; // THIS ONE!!!
    mymap2.reserve(20);
    for (auto i:mymap) {
        mymap2[i.first] = i.second;
    }


    cout << "max_load factor " << mymap2.max_load_factor() << " mymap2 has " << mymap2.bucket_count() << " buckets.\n";

    for (unsigned i=0; i<mymap2.bucket_count(); ++i) {
        cout << "bucket #" << setw(2) << i << " >> ";
        for (auto it = mymap2.begin(i); it!=mymap2.end(i); ++it)
            cout << "[" << it->first << ":" << it->second << "] ";
          cout << endl;
    }

  return 0;
}
