/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if (!root) {
            return ans;
        }
        
        q.push(root);
        int k = 0;
        while(!q.empty()) {
            vector<int> temp;
            int l = q.size();
            for (int i =0; i<l; i++) {
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                
                if (curr->left) {
                    q.push(curr->left);
                }
                
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            ans.push_back(temp);
        }
        
        for (int i =0; i<ans.size(); i++){
            if (i%2==0) continue;
            reverse(ans[i].begin(), ans[i].end());
        }
        
        return ans;
    }
};