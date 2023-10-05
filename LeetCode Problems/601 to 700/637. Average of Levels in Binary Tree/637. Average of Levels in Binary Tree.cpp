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
    vector<double> result;

public:
    vector<double> averageOfLevels(TreeNode *root) {
        if (root == NULL)
            return {0, 0};
        queue<TreeNode *> q;
        q.push(root);
        while (q.empty() == false) {
            int nodeCount = q.size(), cnt = 0;
            double sum = 0;
            while (nodeCount > 0) {
                TreeNode *node = q.front();
                sum += node->val;
                cnt++;
                q.pop();
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
                nodeCount--;
            }
            result.push_back(sum / cnt);
        }
        return result;
    }
};