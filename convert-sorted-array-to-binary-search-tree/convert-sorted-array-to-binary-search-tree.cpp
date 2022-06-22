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
    TreeNode* solve(vector<int> &nums, int high, int low) {
        
        if (low>high) {
            return NULL;
        }
        
        int mid;
        mid = low + (high-low)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(nums, mid-1, low);
        root->right = solve(nums, high, mid+1);
        
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = solve(nums, nums.size()-1, 0);
        return root;
    }
};