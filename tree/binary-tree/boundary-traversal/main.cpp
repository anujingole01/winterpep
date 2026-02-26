// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
  vector<int> ans;

  void dfsLeft(Node *nd) {
    if (!nd || (!nd->left && !nd->right)) {
      return;
    }

    ans.push_back(nd->data);

    auto childToRecurFor = nd->left ? nd->left : nd->right;

    dfsLeft(childToRecurFor);
  }

  void dfsBottom(Node *nd) {
    if (!nd) {
      return;
    }

    if (!nd->left && !nd->right) {
      ans.push_back(nd->data);
      return;
    }

    dfsBottom(nd->left);
    dfsBottom(nd->right);
  }

  void dfsRight(Node *nd) {
    if (!nd || (!nd->left && !nd->right)) {
      return;
    }

    auto childToRecurFor = nd->right ? nd->right : nd->left;
    dfsRight(childToRecurFor);

    ans.push_back(nd->data);
  }

  vector<int> boundaryTraversal(Node *root) {
    if (!root)
      return {};

    if (!root->left && !root->right) {
      return {root->data};
    }

    ans = {root->data};

    dfsLeft(root->left);
    dfsBottom(root);
    dfsRight(root->right);

    return ans;
  }
};
