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
    int ans = 0;

public:
    void help(TreeNode *root, int val) {
        if (root == nullptr) return;
        val = val * 10 + root->val;
        if (!root->left && !root->right) {
            ans += val;
            return;
        }
        help(root->left, val);
        help(root->right, val);
    }
    int sumNumbers(TreeNode *root) {
        help(root, 0);
        return ans;
    }
};
