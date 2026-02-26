// https://www.geeksforgeeks.org/problems/k-distance-from-root/1

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
public:
  vector<int> ans;

  void dfs(Node *nd, int remDist) {
    if (!nd || remDist < 0)
      return;

    if (!remDist) {
      ans.push_back(nd->data);
      return;
    }

    dfs(nd->left, remDist - 1);
    dfs(nd->right, remDist - 1);
  }

  vector<int> Kdistance(Node *root, int k) {
    ans.clear();
    dfs(root, k);

    return ans;
  }
};
