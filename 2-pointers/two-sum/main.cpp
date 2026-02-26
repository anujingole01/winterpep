// https://leetcode.com/problems/two-sum/

class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
       int sz = nums.size();
       vector<int>ans(2);

       vector<pair<int, int>>pairs(sz);

       for (int i=0; i<sz; ++i) {
           pairs[i] = {nums[i], i};
       }

       sort(begin(pairs), end(pairs));

       for (int low=0, high=sz-1; low < high; ) {
           int sum = pairs[low].first + pairs[high].first;

           if (sum > target) {
               --high;
           } else if (sum < target) {
               ++low;
           } else {
               ans = {pairs[low].second, pairs[high].second};
               break;
           }
       }

       return ans;
   }
};
