// https://leetcode.com/problems/sum-of-left-leaves/description/

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
  int sumOfLeftLeaves(TreeNode *root, bool leftChild = 0) {
    if (!root)
      return 0;

    if (!root->left && !root->right) {
      return leftChild ? root->val : 0;
    }

    int leftSum = sumOfLeftLeaves(root->left, 1);
    int rightSum = sumOfLeftLeaves(root->right, 0);

    return leftSum + rightSum;
  }
};
