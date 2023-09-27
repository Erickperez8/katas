#include <string>
#include <sstream>
#include <limits>

std::string highAndLow(const std::string& numbers){
  std::stringstream ss(numbers);
  int num, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  while (ss >> num) {
    min = (num < min) ? num : min;
    max = (num > max) ? num : max;
  };
  return std::to_string(max) + " " + std::to_string(min);
}