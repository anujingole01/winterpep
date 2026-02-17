class Solution {
public:
  vector<int> nextGreaterElements(vector<int> &nums) {
    int sz = nums.size();
    vector<int> ans(sz, -1);
    stack<int> st;

    for (int i = 0; i < 2 * sz; ++i) {
      while (!st.empty() && nums[i % sz] > nums[st.top()]) {
        ans[st.top()] = nums[i % sz];
        st.pop();
      }
      st.push(i % sz);
    }

    return ans;
  }
};
