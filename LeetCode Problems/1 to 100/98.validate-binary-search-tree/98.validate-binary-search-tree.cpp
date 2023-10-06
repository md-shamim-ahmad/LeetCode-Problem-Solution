/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start

//Definition for a binary tree node.
//   struct TreeNode {
//       int val;
//       TreeNode *left;
//       TreeNode *right;
//       TreeNode() : val(0), left(nullptr), right(nullptr) {}
//       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//   };
typedef long long ll;
class Solution {
    bool ans = false;

public:
    bool check(TreeNode *root, ll mn, ll mx) {
        if (root == nullptr) return true;
        int value = root->val;
        if (value < mx && value > mn) {
            return check(root->left, mn, root->val) and check(root->right, root->val, mx);
        }
        return false;
    }
    bool isValidBST(TreeNode *root) {
        return check(root, LONG_MIN, LONG_MAX);
    }
};
// @lc code=end
