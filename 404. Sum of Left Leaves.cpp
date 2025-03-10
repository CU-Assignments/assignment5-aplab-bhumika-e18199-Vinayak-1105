
class Solution {
public:
    int result = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
            return 0;
        dfs(root, false);
        return result;
    }
    void dfs(TreeNode* root, bool isLeft) {
        if(root->left == NULL && root->right == NULL) {
            if(isLeft == true)
                result += root->val;
            return ;
        }
        if(root->left != NULL)
            dfs(root->left, true);
        if(root->right != NULL)
            dfs(root->right, false);
    }
};
