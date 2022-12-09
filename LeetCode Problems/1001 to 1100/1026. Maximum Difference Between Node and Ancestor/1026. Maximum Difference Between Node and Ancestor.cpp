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
    int helper(TreeNode *root, int mn, int mx) {
        if(root == nullptr)
            return mx - mn;
        mn = min(mn, root->val);
        mx = max(mx, root->val);
        return max(helper(root->left, mn, mx), helper(root->right, mn, mx));
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return helper(root, INT_MAX, 0);
    }
};
