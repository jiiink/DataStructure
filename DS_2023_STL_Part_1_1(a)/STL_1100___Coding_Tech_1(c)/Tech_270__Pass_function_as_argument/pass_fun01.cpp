#include <vector>
#include <algorithm>
#include <iostream>

int makeNumbersBig(int small) {
  return small * 10;
}

int main() {
  std::vector<int> numbers{1, 2, 3}; // numbers has 3 values: 1, 2, 3
  std::vector<int> bigNumbers(3); // bigNumbers has 3 values, default
                                  // initialized: 0, 0, 0

  // Starting at numbers.begin() and until numbers.end(), execute
  // makeNumbersBig and store the result in bigNumbers
  std::transform(
    numbers.begin(),
    numbers.end(),
    bigNumbers.begin(),
    makeNumbersBig
  );

  // Print the values of bigNumbers
  for (const auto big : bigNumbers) {
    std::cout << big << std::endl;
  }
}
