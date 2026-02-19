class Solution {
public:
    int getLeftHeight(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->left;
        }
        return height;
    }
    
    int getRightHeight(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->right;
        }
        return height;
    }
    
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        
        int lh = getLeftHeight(root);
        int rh = getRightHeight(root);
        
        if (lh == rh)
            return (1 << lh) - 1;   // 2^h - 1
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};