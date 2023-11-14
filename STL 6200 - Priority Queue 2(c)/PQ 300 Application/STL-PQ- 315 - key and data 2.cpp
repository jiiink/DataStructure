#include <bits/stdc++.h>
using namespace std;

struct DATA {
    string key;
    int brix;
};

 bool operator<(const DATA &d1, const DATA & d2){return d1.brix < d2.brix ;}
// bool operator<(const DATA &d1, const DATA & d2){return true ;}

int main() {
    priority_queue<DATA> PQ;

    DATA newItem;
    newItem.key = "Apples";  newItem.brix =  61;  PQ.push(newItem);
    newItem.key = "Orange";  newItem.brix =  43;  PQ.push(newItem);
    newItem.key = "Banana";  newItem.brix =  87;  PQ.push(newItem);
    newItem.key = "Sprite" ; newItem.brix = 121;  PQ.push(newItem);
    newItem.key = "Pear"  ;  newItem.brix =  34;  PQ.push(newItem);
    newItem.key = "Soju";    newItem.brix =  42;  PQ.push(newItem);
    newItem.key = "Terra";   newItem.brix =  17;  PQ.push(newItem);
    newItem.key = "Water"  ; newItem.brix =  10;  PQ.push(newItem);
    newItem.key = "Mango";   newItem.brix = 142;  PQ.push(newItem);
    newItem.key = "GUm  ";   newItem.brix =  38;  PQ.push(newItem);
    newItem.key = "해창막" ; newItem.brix =  15;  PQ.push(newItem);

    int i = 0 ;
    while (!PQ.empty()) {
        cout << " Highest Brix:  " << PQ.top().key << endl;
        PQ.pop();
        i++ ;
        if( i>=5 ) break ;
  } // end of while ( )

    return 0;
}
