https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

class Solution {
  public:

    void reverseInGroups(vector<int> &arr, int k) {
        int sz = arr.size();
        int i = 0;

        while (i<sz) {
            int l = i;
            int r = min(sz-1, i + k - 1);

            while (l < r) {
                swap(arr[l], arr[r]);
                ++l, --r;
            }

            i += k;
        }
    }
};
