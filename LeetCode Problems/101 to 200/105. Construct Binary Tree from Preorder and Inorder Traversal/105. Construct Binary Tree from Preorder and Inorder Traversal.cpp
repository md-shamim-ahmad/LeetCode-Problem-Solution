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
    unordered_map<int, int> mapValIdx;
    int preIdx = 0;
    TreeNode* dfs_fun(int left, int right, vector<int> &preorder) {
        if (left > right) return nullptr;
        TreeNode *root = new TreeNode(preorder[preIdx++]);
        int mid = mapValIdx[root->val];
        root->left = dfs_fun(left, mid - 1, preorder);
        root->right = dfs_fun(mid + 1, right, preorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int n = inorder.size();
        for (int i = 0; i < n; ++i) mapValIdx[inorder[i]] = i;
        return dfs_fun(0, n - 1, preorder);
    }
};
