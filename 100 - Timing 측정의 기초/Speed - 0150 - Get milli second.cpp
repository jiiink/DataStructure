#include <Windows.h>
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void ChronoLoop() {
    system_clock::time_point start;

    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= 10000; j++) {
            start = system_clock::now();
        }
    }
}

void QueryLoop() {
    LARGE_INTEGER li;
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= 10000; j++) {
            QueryPerformanceCounter(&li);
        }
    }
}

typedef duration<double, milli> doublemillisec;

int main() {
    system_clock::time_point start = system_clock::now();
    ChronoLoop();
    system_clock::time_point end = system_clock::now();

    doublemillisec doubleMilliSec = duration_cast<doublemillisec>(end - start);
    cout << "ChronoLoop: " << doubleMilliSec.count() << endl;

    start = system_clock::now();
    QueryLoop();
    end = system_clock::now();

    doubleMilliSec = duration_cast<doublemillisec>(end - start);
    cout << "QueryLoop: " << doubleMilliSec.count() << endl;

    return 0;
}
