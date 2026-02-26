// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

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
  bool dfs(TreeNode *nd, unordered_set<int> &ust, const int &k) {
    if (!nd)
      return 0;

    if (ust.find(k - nd->val) != end(ust)) {
      return 1;
    }

    ust.insert(nd->val);
    return dfs(nd->left, ust, k) || dfs(nd->right, ust, k);
  }

  bool findTarget(TreeNode *root, int k) {
    unordered_set<int> ust;

    return dfs(root, ust, k);
  }
};
