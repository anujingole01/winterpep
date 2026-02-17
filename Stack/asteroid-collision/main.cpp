class Solution {
public:
  vector<int> asteroidCollision(vector<int> &arr) {
    int sz = arr.size();
    stack<int> st;

    for (int i = 0; i < sz; ++i) {
      if (arr[i] > 0) {
        st.push(arr[i]);
        continue;
      }

      while (!st.empty() && st.top() > 0 && abs(arr[i]) > st.top()) {
        st.pop();
      }

      if (!st.empty()) {
        if (st.top() < 0) {
          st.push(arr[i]);
        } else if (st.top() == abs(arr[i])) {
          st.pop();
        }
      } else {
        st.push(arr[i]);
      }
    }

    vector<int> ans(st.size());

    for (int i = ans.size() - 1; i > -1; --i) {
      ans[i] = st.top();
      st.pop();
    }

    return ans;
  }
};
