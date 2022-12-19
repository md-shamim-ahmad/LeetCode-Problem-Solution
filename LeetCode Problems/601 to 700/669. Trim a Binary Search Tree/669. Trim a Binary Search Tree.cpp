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
    TreeNode* trimBST(TreeNode* R, int L, int H) {
        if (!R) return R;
        if (R->val < L) return trimBST(R->right,L,H);
        else if (R->val > H) return trimBST(R->left,L,H);
        R->left = trimBST(R->left,L,H) ;
        R->right = trimBST(R->right,L,H);
        return R;
    }
};
