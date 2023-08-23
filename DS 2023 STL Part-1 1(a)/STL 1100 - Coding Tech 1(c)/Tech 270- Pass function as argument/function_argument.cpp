#include <vector>
#include <algorithm>
#include <iostream>

void transform(std::vector<int>::iterator beginIt,
    std::vector<int>::iterator endIt,
    std::vector<int>::iterator destinationBeginIt,
    int func (int)) {

    while (beginIt != endIt) {
    *destinationBeginIt = func(*beginIt);
    beginIt++;
    destinationBeginIt++;
    }
} // end of transform( )

int main() {
  std::vector<int> numbers{1, 2, 3}; // numbers has 3 values: 1, 2, 3
  std::vector<int> bigNumbers(3); // bigNumbers has 3 values, default
                                  // initialized: 0, 0, 0

  transform( numbers.begin(), numbers.end(), bigNumbers.begin(),
    [](int small) { return small * 10; }
  ); // call a function


  for (const auto big : bigNumbers) {
    std::cout << big << std::endl;
  }
}
