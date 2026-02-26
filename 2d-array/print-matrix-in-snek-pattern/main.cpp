// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

class Solution {
public:
  vector<int> snakePattern(vector<vector<int>> &v) {
    int sz = v.size();
    vector<int> ans(sz * sz);

    for (int i = 0; i < sz; ++i) {
      for (int j = 0; j < sz; ++j) {
        int actualJ = (i & 1) ? sz - j - 1 : j;
        ans[(sz * i) + j] = v[i][actualJ];
      }
    }

    return ans;
  }
};
