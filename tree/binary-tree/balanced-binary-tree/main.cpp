// https://leetcode.com/problems/balanced-binary-tree/description/

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
  int helper(TreeNode *root) {
    if (!root) {
      return 0;
    }

    if (!root->left && !root->right) {
      return 1;
    }

    int leftChildHeight = helper(root->left);

    if (leftChildHeight == -1) {
      return -1;
    }

    int rightChildHeight = helper(root->right);

    if (rightChildHeight == -1) {
      return -1;
    }

    int heightDiff = abs(rightChildHeight - leftChildHeight);

    if (heightDiff > 1) {
      return -1;
    }

    return 1 + max(leftChildHeight, rightChildHeight);
  }

  bool isBalanced(TreeNode *root) { return helper(root) != -1; }
};
