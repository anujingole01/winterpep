// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1909548108/


class Solution {
public:
    int firstUniqChar(string &s) {
        unordered_map<char, int>ump;
        int sz = s.size();

        for (int i=0; i<sz; ++i) {
            if (ump.find(s[i]) != end(ump)) {
                ump[s[i]] = -1;
            } else {
                ump[s[i]] = i;
            }
        }

        for (int i=0; i<sz; ++i) {
            if (ump[s[i]] != -1) {
                return i;
            }
        }

        return -1;
    }
};
