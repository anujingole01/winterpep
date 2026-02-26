// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int sz = arr.size();
        
        sort(begin(arr), end(arr));

        for (int i=0; i<sz-2; ++i) {
            int actual_tar = target - arr[i];
            
            for (int low=i+1, high=sz-1; low<high; ) {
                int sum = arr[low] + arr[high];
                
                if (sum > actual_tar) {
                    --high;
                } else if (sum < actual_tar) {
                    ++low;
                } else {
                    return true;
                }
            }
        }
        
        return false;
    }
};

