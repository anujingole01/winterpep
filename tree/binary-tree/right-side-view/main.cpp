// https://leetcode.com/problems/binary-tree-right-side-view/submissions/1927293463/

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
  vector<int> ans;

  int dfs(TreeNode *nd, int depth, int maxDepth) {
    if (!nd)
      return maxDepth;

    if (depth > maxDepth) {
      maxDepth = depth;
      ans.push_back(nd->val);
    }

    int rightMaxDepth = dfs(nd->right, depth + 1, maxDepth);
    maxDepth = max(maxDepth, rightMaxDepth);

    int leftMaxDepth = dfs(nd->left, depth + 1, maxDepth);
    maxDepth = max(maxDepth, leftMaxDepth);

    return maxDepth;
  }

  vector<int> rightSideView(TreeNode *root) {
    if (!root)
      return {};

    ans.clear();
    dfs(root, 1, 0);

    return ans;
  }
};
