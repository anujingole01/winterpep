// https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int sz = arr.size(), r = sz-1;

        for (int i=0; i<sz-1; ++i) {
            if (arr[i] > arr[i+1]) {
                r = i;
                break;
            }
        }

        int l = (r + 1) % sz;

        while (l != r) {
            int sum = arr[l] + arr[r];

            if (sum > target) {
                r = (r - 1 + sz) % sz;
            } else if (sum < target) {
                l = (l + 1) % sz;
            } else {
                return true;
            }
        }

        return false;
    }
};
