// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;aQ1SW2Q
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (!root || root == p || root == q) {
      return root;
    }

    auto recLeft = lowestCommonAncestor(root->left, p, q);
    auto recRight = lowestCommonAncestor(root->right, p, q);

    if (recLeft && recRight) {
      return root;
    }

    return recLeft ? recLeft : recRight;
  }
};
