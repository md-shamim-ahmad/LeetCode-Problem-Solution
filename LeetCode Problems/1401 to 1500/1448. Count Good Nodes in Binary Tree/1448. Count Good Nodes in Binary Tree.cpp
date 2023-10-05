/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int help(TreeNode *root, int value) {
        if (root != nullptr) {
            int cnt = help(root->left, max(value, root->val)) +
                      help(root->right, max(value, root->val));
            if (root->val >= value)
                cnt++;
            return cnt;
        }
        return 0;
    }

    int goodNodes(TreeNode *root) { return help(root, INT_MIN); }
};
