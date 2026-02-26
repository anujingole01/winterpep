// https://leetcode.com/problems/binary-search/description/

class Solution {
public:
  int sz;

  int searchAux(const vector<int> &v, int tar, int l, int r) {
    if (l > r)
      return -1;

    int m = l + ((r - l) >> 1);

    if (v[m] == tar)
      return m;

    if (v[m] < tar) {
      l = m + 1;
    } else {
      r = m - 1;
    }

    return searchAux(v, tar, l, r);
  }

  int search(vector<int> &nums, int target) {
    sz = nums.size();

    return searchAux(nums, target, 0, sz - 1);
  }
};
