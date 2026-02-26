// https://leetcode.com/problems/validate-binary-search-tree/description/

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
  bool isValidBST(TreeNode *root, long long mn = INT_MIN,
                  long long mx = INT_MAX) {
    if (!root)
      return 1;

    if (root->val < mn || root->val > mx) {
      return 0;
    }

    if (!isValidBST(root->left, mn, root->val - 1ll)) {
      return 0;
    }

    return isValidBST(root->right, root->val + 1ll, mx);
  }
};
