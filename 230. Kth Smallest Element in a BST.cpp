
class Solution {
public:
    vector<int> nums;
    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL || nums.size() >= k) return nums[k - 1];
        if (root->left != NULL) kthSmallest(root->left, k);
        nums.push_back(root->val);
        if (root->right != NULL) kthSmallest(root->right, k);
        return nums[k - 1];
    }
};
