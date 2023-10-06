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
    bool isCompleteTree(TreeNode *root) {
        return checker(root, 0, countNodes(root));
    }

private:
    int countNodes(TreeNode *root) {
        if (root == NULL) return 0;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
    bool checker(TreeNode *root, int currNode, int totalNode) {
        if (root == NULL) return true;
        if (currNode >= totalNode) return false;
        return checker(root->left, 2 * currNode + 1, totalNode) &&
               checker(root->right, 2 * currNode + 2, totalNode);
    }
};