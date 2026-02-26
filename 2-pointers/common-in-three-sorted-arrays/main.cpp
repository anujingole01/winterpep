https://www.geeksforgeeks.org/problems/common-elements1132/1

class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b,
                               vector<int> &c) {
       int sza = a.size();
       int szb = b.size();
       int szc = c.size();

       vector<int> ans;

       for (int pa=0, pb=0, pc=0; pa<sza && pb<szb && pc<szc; ) {
           if (a[pa]==b[pb] && b[pb]==c[pc]) {
               if (ans.empty() || ans.back()!=a[pa]) {
                   ans.push_back(a[pa]);
               }
               ++pa, ++pb, ++pc;
           } else {
               int mn = min({a[pa], b[pb], c[pc]});

               if (a[pa]==mn) {
                   ++pa;
               } else if (b[pb]==mn) {
                   ++pb;
               } else {
                   ++pc;
               }
           }
       }

       if (ans.empty()) {
           ans.push_back(-1);
       }

       return ans;
    }
};
