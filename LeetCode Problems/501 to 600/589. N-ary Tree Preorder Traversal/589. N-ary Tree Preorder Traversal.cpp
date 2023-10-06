/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node *root) {
        vector<int> list;
        if (!root)
            return list;
        stack<Node *> arr;
        arr.push(root);
        while (!arr.empty()) {
            auto top = arr.top();
            arr.pop();
            list.push_back(top->val);
            for (auto it = rbegin(top->children); it != rend(top->children); it++)
                arr.push(*it);
        }
        return list;
    }
};