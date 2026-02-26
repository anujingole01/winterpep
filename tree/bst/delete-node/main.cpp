// https://leetcode.com/problems/delete-node-in-a-bst/submissions/1928922517/

class Solution {
public:
  TreeNode *deleteNode(TreeNode *root, const int &tar) {
    if (!root) {
      return nullptr;
    }

    if (root->val < tar) {
      root->right = deleteNode(root->right, tar);
      return root;
    }

    if (root->val > tar) {
      root->left = deleteNode(root->left, tar);
      return root;
    }

    if (root->right) {
      TreeNode *inOrdSuc = root->right;

      while (inOrdSuc->left) {
        inOrdSuc = inOrdSuc->left;
      }

      root->val = inOrdSuc->val;
      root->right = deleteNode(root->right, inOrdSuc->val);

      return root;
    }

    return root->left;
  }
};
