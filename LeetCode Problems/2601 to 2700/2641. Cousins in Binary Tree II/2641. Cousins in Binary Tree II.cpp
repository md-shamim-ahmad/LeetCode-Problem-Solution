class Solution {
public:
    vector<int> sums;
    deque<TreeNode*> dq;

    void bfs(TreeNode* root) {
        dq.push_back(root);
        int lev = 0;

        while (!dq.empty()) {
            int n = dq.size();
            while (n--) {
                TreeNode* node = dq.front();
                int sibSum = 0;
                if (node->left) {
                    sibSum += node->left->val;
                }
                if (node->right) {
                    sibSum += node->right->val;
                }
                if (node->left) {
                    node->left->val = sums[lev + 1] - sibSum;
                    dq.push_back(node->left);
                }
                if (node->right) {
                    node->right->val = sums[lev + 1] - sibSum;
                    dq.push_back(node->right);
                }
                dq.pop_front();
            }
            lev++;
        }
    }

    void dfs(TreeNode* root, int lev) {
        if (root == nullptr) return;
        if (sums.size() > lev) {
            sums[lev] += root->val;
        } else {
            sums.push_back(root->val);
        }
        dfs(root->left, lev + 1);
        dfs(root->right, lev + 1);
    }

    TreeNode* replaceValueInTree(TreeNode* root) {
        dfs(root, 0);
        bfs(root);
        root->val = 0;
        return root;
    }
};