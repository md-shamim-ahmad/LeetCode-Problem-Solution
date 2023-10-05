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
    int sum = 0;

public:
    void help(TreeNode *root, int direc) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) {
            if (direc == 0)
                sum += root->val;
        }
        help(root->left, 0);
        help(root->right, 1);
    }
    int sumOfLeftLeaves(TreeNode *root) {
        help(root, 1);
        return sum;
    }
};
