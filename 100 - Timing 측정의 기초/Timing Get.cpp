#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;


int main() {
    chrono::system_clock btime ;
    chrono::duration<double> elapsed_seconds ;

    auto start = chrono::system_clock::now();
        for (int i = 0; i < 10000000; i++) {}
    auto end = chrono::system_clock::now();

    elapsed_seconds = end - start;
    cout << "Elapsed Time: " << elapsed_seconds.count() << " sec" << endl;

    return 0;
}
