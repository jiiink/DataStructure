#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;


int main() {
    system_clock btime ;
    duration<double> elapsed_seconds ;

    system_clock::time_point mstart, mend ;

    mstart = system_clock::now();
        for (int i = 0; i < 10000000; i++) {}
    mend = system_clock::now();

    elapsed_seconds = mend - mstart;
    cout << "ÃÑ ¼öÇà½Ã°£ : " << elapsed_seconds.count() << " sec." << endl;

    return 0;
}
