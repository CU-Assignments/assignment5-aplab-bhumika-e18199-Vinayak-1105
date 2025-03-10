
class Solution {
private:
    vector<int> v;
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL ||(root->left == NULL && root->right == NULL)) return true;
        inorder(root);
        for(int i = 1; i < v.size(); i++)
            if(v[i] <= v[i-1]) return false;
        return true;
    }
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
};
