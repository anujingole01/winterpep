// https://leetcode.com/problems/count-complete-tree-nodes/description/

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
  typedef TreeNode *tn;
  int countNodes(TreeNode *nd) {
    if (!nd)
      return 0;

    int lh = 0;
    int rh = 0;

    tn lp = nd;
    tn rp = nd;

    while (lp) {
      ++lh;
      lp = lp->left;
    }

    while (rp) {
      ++rh;
      rp = rp->right;
    }

    if (lh == rh) {
      return (1 << lh) - 1;
    }

    int ans = 1;
    ans += countNodes(nd->left);
    ans += countNodes(nd->right);

    return ans;
  }
};
