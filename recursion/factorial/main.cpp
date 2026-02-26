// https://www.geeksforgeeks.org/problems/factorial5739/1

class Solution {
public:
  int factorial(int n) {
    if (n < 3)
      return n;

    return n * factorial(n - 1);
  }
};
