// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
public:
  vector<int> ans;

  int dfs(Node *nd, int lev, int mxLev) {
    if (!nd)
      return mxLev;

    if (lev > mxLev) {
      mxLev = lev;
      ans.push_back(nd->data);
    }

    mxLev = max(mxLev, dfs(nd->left, lev + 1, mxLev));

    return max(mxLev, dfs(nd->right, lev + 1, mxLev));
  }

  vector<int> leftView(Node *root) {
    ans.clear();
    dfs(root, 1, 0);

    return ans;
  }
};
