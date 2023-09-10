#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>
#include <array>

using namespace std;

#define N 10000000
array<long, N> myarray;
int carray[N];

void C_style_insert() {
    for (long i = 0; i < N; ++i) {
        carray[i] = i;
    }
}

void array_insert() {
    for (long i = 0; i < N; ++i) {
        myarray[i] = i;
    }
}

void vector_insert() {
    vector<long> myvector;
    for (long i = 0; i < N; ++i) {
        myvector.push_back(i);
    }
}

double Time_Check(string MSG, void (*target)()) {
    chrono::system_clock::time_point mybegin, myend;
    chrono::duration<double> sec;
    double tsec;

    mybegin = chrono::system_clock::now();
    target();
    myend = chrono::system_clock::now();
    sec = myend - mybegin;

    tsec = sec.count();
    cout << "\n" << MSG << ": " << tsec << endl;
    return (tsec);
}

int main() {
    Time_Check("array insert", array_insert);
    Time_Check("vector insert", vector_insert);
    Time_Check("c-style insert", C_style_insert);
    return 0;
}
