#include <vector>

int positive_sum(const std::vector<int>& xs) {
  int sum = 0;
  for (auto x : xs)
    if (x > 0)
      sum += x;
  return sum;
}