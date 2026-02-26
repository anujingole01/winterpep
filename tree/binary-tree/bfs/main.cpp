// https://leetcode.com/problems/binary-tree-level-order-traversal/description/

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
  vector<vector<int>> levelOrder(TreeNode *root) {
    if (!root)
      return {};

    queue<TreeNode *> q;
    q.push(root);
    vector<vector<int>> ans;

    while (!q.empty()) {
      int sz = q.size();
      ans.push_back(vector<int>(sz));

      for (int i = 0; i < sz; ++i) {
        auto nd = q.front();
        q.pop();

        ans.back()[i] = nd->val;

        if (nd->left) {
          q.push(nd->left);
        }

        if (nd->right) {
          q.push(nd->right);
        }
      }
    }

    return ans;
  }
};
