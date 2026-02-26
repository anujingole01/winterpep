// https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
  void reverseString(vector<char> &s, int ind = 0) {
    int sz = s.size();

    if (ind >= sz / 2)
      return;

    int mirrI = sz - ind - 1;
    swap(s[ind], s[mirrI]);

    reverseString(s, ind + 1);
  }
};
