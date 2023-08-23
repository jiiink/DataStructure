
#include <chrono>
#include <iostream>
#include <cmath>

using namespace std ;
using namespace chrono ;

#define UCK_1  200000000


void Test() {
    double qd = 0.0;
    for ( long i = 0; i < UCK_1 ; ++i ) {
       // qd =  (double)i + 123.456L ;
       qd +=  sqrt( (double)i + 123.456L );
    }
}

int main() {

    system_clock::time_point StartTime = system_clock::now();

    Test();

    system_clock::time_point EndTime = system_clock::now();


    duration <double> DefaultSec = EndTime - StartTime;

    nanoseconds nano    = EndTime - StartTime;
    microseconds micro  = duration_cast<microseconds> (EndTime - StartTime);
    milliseconds mill	= duration_cast<milliseconds> (EndTime - StartTime);
    seconds sec		    = duration_cast<seconds>      (EndTime - StartTime);
    minutes mins	    = duration_cast<minutes>      (EndTime - StartTime);
    hours hour			= duration_cast<hours>        (EndTime - StartTime);


    cout << "Test() 수행 시간 : " << DefaultSec.count() << " DefaultSec."   << endl;
    cout << "Test() 수행 시간 : " << nano.count ()      << " nanoseconds"   << endl;
    cout << "Test() 수행 시간 : " << micro.count()      << " microseconds"  << endl;
    cout << "Test() 수행 시간 : " << mill.count ()      << " milliseconds"  << endl;
    cout << "Test() 수행 시간 : " << sec.count  ()      << " seconds"       << endl;
    cout << "Test() 수행 시간 : " << mins.count ()      << " minutes"       << endl;
    cout << "Test() 수행 시간 : " << hour.count ()      << " hour"          << endl;

    return 0;
}


