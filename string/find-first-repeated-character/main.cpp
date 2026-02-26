// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1


class Solution {
  public:
    string firstRepChar(string& s) {
        unordered_map<char, bool> ump;

        for (char& ch: s) {
            if (ump[ch]) {
                string ans;
                ans.push_back(ch);

                return ans;
            }
            ump[ch] = 1;
        }

        return "-1";
    }
};
