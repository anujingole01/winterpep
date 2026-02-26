// https://www.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution {
public:
  bool isPalindrome(string &str, int ind = 0) {
    int sz = str.size();

    if (ind >= sz / 2) {
      return 1;
    }

    return str[ind] == str[sz - 1 - ind] && isPalindrome(str, ind + 1);
  }
};
