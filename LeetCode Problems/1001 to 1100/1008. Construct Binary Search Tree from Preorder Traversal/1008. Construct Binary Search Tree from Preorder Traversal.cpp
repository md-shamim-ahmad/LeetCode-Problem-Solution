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
    TreeNode *buildBST(TreeNode *root, int data) {
        if (root == nullptr)
            root = new TreeNode(data);
        else if (root->val > data)
            root->left = buildBST(root->left, data);
        else
            root->right = buildBST(root->right, data);
        return root;
    }
    TreeNode *bstFromPreorder(vector<int> &preorder) {
        TreeNode *root = nullptr;
        for (int i = 0; i < preorder.size(); i++)
            root = buildBST(root, preorder[i]);
        return root;
    }
};