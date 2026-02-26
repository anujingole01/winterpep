// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
       int sz = nums.size();
       int cnt = 1;

       for (int i=1; i<sz; ++i) {
           if (nums[i] == nums[i-1]) {
               ++cnt;
           } else {
               nums[i-cnt+1] = nums[i];
           }
       }

       return sz - cnt + 1;
   }
};
