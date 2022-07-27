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
    bool check(TreeNode *p, TreeNode *q) {
        if (!p and !q) {
            return true;
        }
        
        if (!p) {
            return false;
        }
        
        if (!q) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        bool res1 = check(p->right, q->right);
        if (!res1) {
            return false;
        }
        
        return check(p->left, q->left);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p, q);
    }
};