
class Solution {
public:
    bool func(TreeNode *left, TreeNode *right) {
        if(left == NULL && right == NULL)
            return true;
        if(left != NULL && right != NULL && left->val == right->val) {
            return func(left->left, right->right) && func(left->right, right->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return func(root->left, root->right);
    }
};
