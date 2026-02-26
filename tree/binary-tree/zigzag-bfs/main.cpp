// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    if (!root)
      return {};

    vector<vector<int>> ans;
    queue<TreeNode *> q;
    q.push(root);

    bool dirRight = 1;

    while (!q.empty()) {
      int sz = q.size();
      ans.push_back(vector<int>(sz));

      for (int i = 0; i < sz; ++i) {
        int ind = dirRight ? i : sz - i - 1;
        auto nd = q.front();
        q.pop();
        ans.back()[ind] = nd->val;

        if (nd->left) {
          q.push(nd->left);
        }

        if (nd->right) {
          q.push(nd->right);
        }
      }
      dirRight = !dirRight;
    }

    return ans;
  }
};
