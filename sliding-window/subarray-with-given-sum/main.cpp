https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int sz = arr.size();
        vector<int> ans = {-1};

        for (int l=0, r=0, sum=0; r<sz; ++r) {
            sum += arr[r];

            while (l<r && sum>target) {
                sum -= arr[l];
                ++l;
            }

            if (sum == target) {
                ans = {l+1, r+1};
                break;
            }
        }

        return ans;
    }
};
