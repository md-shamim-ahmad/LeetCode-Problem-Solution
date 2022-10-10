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
    int cnt = 0, node_num = 0, init_val;
    TreeNode* temp;
    bool check = false;
public:
    void help(TreeNode* root, int val, int _node_num){
        if(root == nullptr) 
            return;         
        if(node_num != _node_num) {        
            if(root->val + init_val == val)
                check = true;
        }
        node_num++;
        help(root->left, val, _node_num);
        help(root->right, val, _node_num);
    }
    void node_val(TreeNode* root, int _node_num){
        if(root == nullptr) 
            return;         
        if(node_num == _node_num) {        
            init_val = root->val;
        }
        node_num++;
        node_val(root->left, _node_num);
        node_val(root->right, _node_num);        
    }
    void count_node(TreeNode* root) {
        if (root == nullptr)
            return;
        cnt++;
        count_node(root->left); 
        count_node(root->right);
    }
    bool findTarget(TreeNode* root, int k) { 
        temp = root;        
        if(root == nullptr) {
            return false;
        }
        count_node(root);
        for (int i = 0; i < cnt; i++){
            node_num = 0;
            node_val(root, i);
            node_num = 0, check = false;            
            help(root, k, i);    
            if(check == true) return true;
        }
        return check;
    }
};