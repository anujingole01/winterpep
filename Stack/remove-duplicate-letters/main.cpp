class Solution {
public:
  string removeDuplicateLetters(string &s) {
    int sz = s.size();
    vector<int> mp(26);

    for (char &ch : s) {
      ++mp[ch - 'a'];
    }
    stack<char> st;

    for (int i = 0; i < sz; ++i) {
      char ch = s[i];

      if (mp[ch - 'a'] < 0) {
        ++mp[ch - 'a'];
        continue;
      }

      while (!st.empty() && ch < st.top() && mp[st.top() - 'a'] != 0) {
        mp[st.top() - 'a'] = abs(mp[st.top() - 'a']);
        st.pop();
      }
      st.push(ch);
      mp[ch - 'a'] = 1 - mp[ch - 'a'];
    }

    string ans(st.size(), '-');

    for (int i = ans.size() - 1; i > -1; --i) {
      ans[i] = st.top();
      st.pop();
    }

    return ans;
  }
};
