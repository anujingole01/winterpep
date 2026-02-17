class Solution {
public:
  string firstNonRepeating(string &s) {
    int sz = s.size();
    queue<char> q;
    vector<int> mp(26);
    string ans(sz, '-');

    for (int i = 0; i < sz; ++i) {
      ++mp[s[i] - 'a'];

      if (mp[s[i] - 'a'] == 1) {
        q.push(s[i]);
      }

      while (!q.empty() && mp[q.front() - 'a'] > 1) {
        q.pop();
      }
      ans[i] = q.empty() ? '#' : q.front();
    }

    return ans;
  }
};
