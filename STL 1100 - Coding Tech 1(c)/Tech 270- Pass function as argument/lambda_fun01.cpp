#include <vector>
#include <algorithm>
#include <iostream>

int main() {
  std::vector<int> numbers{1, 2, 3}; // numbers has 3 values: 1, 2, 3
  std::vector<int> bigNumbers(3); // bigNumbers has 3 values, default
                                  // initialized: 0, 0, 0

  std::transform(
    numbers.begin(),
    numbers.end(),
    bigNumbers.begin(),
    [](int small) {
      return small * 10;
    }
  );

  // Print the values of bigNumbers
  for (const auto big : bigNumbers) {
    std::cout << big << std::endl;
  }
}

