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
    vector<int> list;
    void helper(TreeNode *root) {
        if (root == nullptr)
            return;
        if (root->left == nullptr && root->right == nullptr) {
            list.push_back(root->val);
        }
        helper(root->left);
        helper(root->right);
    }

public:
    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        helper(root1);
        vector<int> list1 = list;
        list.clear();
        helper(root2);
        if (list.size() != list1.size())
            return false;
        for (int i = 0; i < list.size(); i++)
            if (list[i] != list1[i])
                return false;
        return true;
    }
};