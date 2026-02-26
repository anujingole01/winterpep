// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
  int height(Node *root) {
    if (!root || (!root->left && !root->right)) {
      return 0;
    }
    int ans = height(root->left);
    ans = max(ans, height(root->right));

    return ans + 1;
  }
};
