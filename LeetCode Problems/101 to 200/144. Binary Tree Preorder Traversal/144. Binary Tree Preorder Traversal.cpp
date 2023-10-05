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
private:
    vector<int> arr;
    void PreorderTraversal(TreeNode *root) {
        if (root == nullptr)
            return;
        arr.push_back(root->val);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }

public:
    vector<int> preorderTraversal(TreeNode *root) {
        PreorderTraversal(root);
        return arr;
    }
};