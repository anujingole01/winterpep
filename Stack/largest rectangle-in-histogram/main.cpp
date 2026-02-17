class Solution {
public:
  int sz;

  void getPse(vector<int> &arr, vector<int> &pse) {
    stack<int> st;

    for (int i = sz - 1; i > -1; --i) {
      while (!st.empty() && arr[st.top()] > arr[i]) {
        pse[st.top()] = i;
        st.pop();
      }
      st.push(i);
    }
  }

  void getNse(vector<int> &arr, vector<int> &nse) {
    stack<int> st;

    for (int i = 0; i < sz; ++i) {
      while (!st.empty() && arr[i] < arr[st.top()]) {
        nse[st.top()] = i;
        st.pop();
      }

      st.push(i);
    }
  }

  int largestRectangleArea(vector<int> &arr) {
    sz = arr.size();
    vector<int> nse(sz, sz);
    vector<int> pse(sz, -1);

    getPse(arr, pse);
    getNse(arr, nse);

    int ans = 0;

    for (int i = 0; i < sz; ++i) {
      int res = (nse[i] - pse[i] - 1) * arr[i];
      ans = max(ans, res);
    }

    return ans;
  }
};
