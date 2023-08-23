
#include <chrono>
#include <iostream>
using namespace std ;

int main() {

    {  chrono::hours H1(1);
       cout << "H1(1) : " << H1.count() <<endl;
       chrono::seconds S1(10);
       chrono::seconds S2(120);
       cout << "S1(10) : " << S1.count() <<endl;
       cout << "S2(120) : " << S2.count() <<endl;
    }

    {
       chrono::hours H1(1);
       chrono::hours H2(2);
       chrono::hours H3 = H1 + H2;

       cout << "H1 + H2 = : " << H3.count() <<endl;

       chrono::seconds S1(10);
       chrono::milliseconds MILS1(100);
       chrono::milliseconds MILS2 = S1 + MILS1;

       cout << "S1 + MILS1 = : " << MILS2.count() <<endl;
       chrono::seconds S2 =chrono::duration_cast<chrono::seconds >(S1 + MILS1);
       cout << "S1 + MILS1 = : " << S2.count() <<endl;
    }

    return 0;
}

