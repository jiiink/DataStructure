#include <iostream>
#include <vector>

template<typename T>
void print(std::vector<T> const &v) {
    for (auto i: v) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

template<typename T>
std::vector<T> slice(std::vector<T> const &v, int m, int n) {
    auto first = v.cbegin() + m;
    auto last = v.cbegin() + n + 1;

    std::vector<T> vec(first, last);
    return vec;
}

int main() {

    std::vector<int> v = { 1, 2, 3, 4, 2, 2, 4, 6, 5 };


    int m = 4, n = 7;

    std::vector<int> sub_vec = slice(v, m, n);
    print(sub_vec);

    return 0;
}
