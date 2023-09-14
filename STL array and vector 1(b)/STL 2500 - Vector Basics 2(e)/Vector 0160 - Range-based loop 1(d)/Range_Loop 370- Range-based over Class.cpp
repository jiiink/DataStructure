// Illustration of range-for loop  using CPP code

#include <iostream>
#include <vector>
#include <array>

using namespace std;

// A sample test class, with custom copy semantics.
class X {
public: X()  : m_data(0)  {}

    X(int data) : m_data(data) {}

    ~X() {}

    X(const X& other) : m_data(other.m_data)
    { cout << "X copy ctor.\n"; }

    X& operator=(const X& other) {
        m_data = other.m_data;
        cout << "X copy assign.\n";
        return *this;
    }

    int Get() const {  return m_data; }
private:
    int m_data;
};

ostream& operator<<(ostream& os, const X& x) {
    os << x.Get();
    return os;
}

int main() {

    vector<X> v = {1, 3, 5, 7, 9};

    cout << "\n Elements of X :\n";
    for (auto x : v) {
        cout << x << ' ';
    }

} // end of main( )
