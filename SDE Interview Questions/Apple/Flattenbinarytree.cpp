#include <iostream>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void flatten(TreeNode* root) {
    if (!root) {
        return;
    }

    // Store the right subtree and left subtree
    TreeNode* rightSubtree = root->right;
    TreeNode* leftSubtree = root->left;

    // Flatten the left subtree
    flatten(leftSubtree);

    // Flatten the right subtree
    flatten(rightSubtree);

    // Set the left subtree to NULL
    root->left = NULL;

    // Attach the flattened left subtree as the right subtree
    root->right = leftSubtree;

    // Find the end of the current flattened tree (the rightmost node)
    TreeNode* current = root;
    while (current->right) {
        current = current->right;
    }

    // Attach the original right subtree to the right of the current flattened tree
    current->right = rightSubtree;
}

// Helper function to print the flattened tree
void printFlattenedTree(TreeNode* root) {
    while (root) {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "Original Tree:" << endl;
    printFlattenedTree(root);

    // Flatten the tree
    flatten(root);

    cout << "Flattened Tree:" << endl;
    printFlattenedTree(root);

    // Clean up memory (not shown in detail in this example)

    return 0;
}
