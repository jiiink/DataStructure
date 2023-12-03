#include <bits/stdc++.h>
using namespace std;

class Time {
  public:

    Time(unsigned short h = 0, unsigned short m = 0, unsigned short s = 0) :
        hours(h), minutes(m), seconds(s) {}

    bool operator==(Time const& other) const {
        return (seconds==other.seconds &&
                minutes==other.minutes &&
                hours==other.hours);
    }

    unsigned short hours, minutes, seconds;

};

ostream& operator<<(ostream& o, Time const& t) {
    o << t.hours << ":" << t.minutes << ":" << t.seconds;
    return o;
}

namespace std {
template<> struct hash<Time> {
    size_t operator()(Time const& t) const {
        return size_t(((t.seconds * 37 + t.minutes) * 37 + t.hours) * 37);
    }
};
}

int main() {
    unordered_map <Time, string> u;

    u.reserve(pow(2,10));

    u[Time(3,  7, 31)] = string("Hello?");
    u[Time(3, 23,  2)] = string("foo");
    u[Time(3, 41, 54)] = string("Zero");
    u[Time(1,  9, 45)] = string("Summer");
    u[Time(4, 55,  7)] = string("Time");
    u[Time(6, 11, 32)] = string("Killer");
    u[Time(6, 11, 32)] = string("No Name");


    for (auto const& i : u) {
        cout << i.first << " - " << i.second << ",  Loc= " << u.bucket(i.first) << endl;
    }
    return 0;
}
