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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d == 1) return new TreeNode(v, root, NULL);
        else if (d == 2) {
            root->left = new TreeNode(v, root->left, NULL);
            root->right = new TreeNode(v, NULL, root->right);
        } else {
            if (root->left) addOneRow(root->left, v, d-1);
            if (root->right) addOneRow(root->right, v, d-1);
        }
        return root;
    }
};
