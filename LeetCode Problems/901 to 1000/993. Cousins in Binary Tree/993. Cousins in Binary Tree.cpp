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
    int xDepth = 0, yDepth = 0;
    TreeNode *xParent = nullptr;
    TreeNode *yParent = nullptr;
    bool isCousins(TreeNode *root, int x, int y) {
        if (root == nullptr)
            return false;
        dfs(root, x, y, 0, nullptr);
        return xDepth == yDepth && xParent != yParent;
    }
    void dfs(TreeNode *root, int x, int y, int depth, TreeNode *parent) {
        if (root == nullptr)
            return;
        if (root->val == x) {
            xDepth = depth;
            xParent = parent;
        } else if (root->val == y) {
            yDepth = depth;
            yParent = parent;
        }
        dfs(root->left, x, y, depth + 1, root);
        dfs(root->right, x, y, depth + 1, root);
    }
};
