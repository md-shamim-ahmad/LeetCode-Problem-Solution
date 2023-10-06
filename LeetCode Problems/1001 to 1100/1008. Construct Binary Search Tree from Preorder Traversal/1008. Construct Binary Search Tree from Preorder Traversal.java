/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private TreeNode buildBST(TreeNode root, int data) {
        if (root == null)
            root = new TreeNode(data);
        else if (root.val > data)
            root.left = buildBST(root.left, data);
        else
            root.right = buildBST(root.right, data);
        return root;
    }
    public TreeNode bstFromPreorder(int[] preorder) {
        TreeNode root = null;
        for (int i = 0; i < preorder.length; i++) root = buildBST(root, preorder[i]);
        return root;
    }
}
