#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>

int main() {
    std::random_device rd;


    std::mt19937 e2(rd());
    //std::knuth_b e2(rd());
    //std::default_random_engine e2(rd()) ;

    std::uniform_real_distribution   <> dist(0, 10);
    //std::normal_distribution       <> dist(2, 2);
    //std::student_t_distribution    <> dist(5);
    //std::poisson_distribution      <> dist(2);
    //std::extreme_value_distribution<> dist(0,2);


    for (int i = 1; i <= 100; ++i) {
        printf("\n i = %3d, %15.10f ", i, dist(e2) ) ;
    }

    /*

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[std::floor(dist(e2))];
    }

    for (auto p : hist) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
                  << p.first << ' ' << std::string(p.second/200, '*') << '\n';
    }

    */
} // end of main
