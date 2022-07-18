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
    map<int, int> m;
    int preOrderIndex = 0;
    TreeNode *solve(vector<int> &preorder, int low, int high) {
        
        if (low>high) return NULL;
        
        int val = preorder[preOrderIndex++];
        TreeNode *root = new TreeNode(val);
        
        root->left = solve(preorder, low, m[val]-1);
        root->right = solve(preorder, m[val]+1, high);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i, n;
        n = inorder.size();
        for(i=0;i<n;i++) {
            m[inorder[i]] = i;
        }
            
        return solve(preorder, 0, n-1);
    }
};