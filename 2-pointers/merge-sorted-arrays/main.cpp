// https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int p1 = m-1;
       int p2 = n-1;
       int i = m+n-1;

       while(i > -1) {
           bool must_use_p1 = (p1 > -1) &&
               (p2<0 || nums2[p2]<nums1[p1]);

           if (must_use_p1) {
               nums1[i] = nums1[p1];
               --p1;
           } else {
               nums1[i] = nums2[p2];
               --p2;
           }

           --i;
       }
   }
};
