#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Boxer{
    public:
        string name;
        int strength;
};

struct Comp{
    bool operator()(const Boxer& a, const Boxer& b){
        return a.strength < b.strength;  // max heap
    }
};

int main(){
    Boxer boxer[10];
    boxer[0].name="Tomas",    boxer[0].strength=43;
    boxer[1].name="Glida",    boxer[1].strength=21;
    boxer[2].name="Gregorio", boxer[2].strength=53;
    boxer[3].name="Fredie",   boxer[3].strength=67;
    boxer[4].name="Wanda",    boxer[4].strength=18;
    boxer[5].name="Nishizeki",boxer[5].strength=53;

    priority_queue< Boxer, vector<Boxer>, Comp> pq;

    for(int i=0 ; i<=5; i++)  pq.push( boxer[i] );

    while( !pq.empty() ) {
        Boxer b = pq.top();
        cout<< "\n ÀÌ¸§= " << b.name << ": T= " << b.strength ;
        pq.pop() ;
     }
    return 0;
}

