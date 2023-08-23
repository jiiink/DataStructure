#include <iostream>
#include <iomanip>
#include <cmath>

class Double {
public:
    Double(double x): value(x) {}
    const double value;
};

std::ostream & operator<< (std::ostream & stream, const Double & x) {
    // So that the log does not scream
    if (x.value == 0.) {
        stream << 0.0;
        return stream;
    }

    int exponent = floor(log10(std::abs(x.value)));
    double base = x.value / pow(10, exponent);

    // Transform here
    base /= 10;
    exponent += 1;

        stream << base << 'E' << exponent; // Change the format as needed

    return stream;
}

int main() {
    // Use it like this
    std::cout << std::setprecision(6) << std::fixed;
    std::cout << Double(-2.203e-15) << std::endl;
    return 0;
}
