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
    private int countNodes(TreeNode root) {
        if (root == null) return 0;
        return countNodes(root.left) + countNodes(root.right) + 1;
    }
    private boolean checker(TreeNode root, int currNode, int totalNode) {
        if (root == null) return true;
        if (currNode >= totalNode) return false;
        return checker(root.left, 2 * currNode + 1, totalNode) && checker(root.right, 2 * currNode + 2, totalNode);
    }
    public boolean isCompleteTree(TreeNode root) {
        return checker(root, 0, countNodes(root));
    }
}
