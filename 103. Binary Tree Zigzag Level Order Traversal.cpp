
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int> row;
        vector<vector<int>> v;
        queue<TreeNode *> q;
        if(root == NULL)
            return v;
        q.push(root);
        TreeNode *temp;
        int lev = 0;
        while(!q.empty()) {
            int size = q.size();
            while(size--) {
                temp = q.front();
                q.pop();
                row.push_back(temp->val);
                if(temp->left != NULL) {
                    q.push(temp->left);
                }
                if(temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            if(lev % 2) {
                int n = row.size();
                for(int i = 0; i < n/2; i++) {
                    swap(row[i], row[n-i-1]);
                }
            }
            v.push_back(row);
            lev++;
            row.clear();
        }
        return v;
    }
};
