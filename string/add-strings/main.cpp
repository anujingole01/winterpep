// https://leetcode.com/problems/add-strings/description/

class Solution {
public:
    string addStrings(string &x, string &y) {
        if (y.size() > x.size()) {
            swap(x, y);
        }

        int szx = x.size();
        int szy = y.size();
        int car = 0;
        int ansInd = 0;

        string ans(szx+1, '0');

        for (int i=szx-1, j=szy-1; i>-1; --i, --j) {
            int cur = car + (x[i]-'0');
            cur += (j > -1) ? (y[j]-'0') : 0;
            ans[ansInd++] = '0' + (cur % 10);
            car = cur / 10;
        }

        if (car) {
            ans[ansInd++] = '0' + car;
        } else {
            ans.pop_back();
        }
        reverse(begin(ans), end(ans));

        return ans;
    }
};
