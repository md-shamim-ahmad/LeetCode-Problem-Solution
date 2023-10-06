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
    private int ans = 0;
    private void traversal(TreeNode root, int pathVal) {
        if (root == null) return;
        pathVal = pathVal * 10 + root.val;
        if (root.left == null && root.right == null) {
            ans += pathVal;
            return;
        }
        traversal(root.left, pathVal);
        traversal(root.right, pathVal);
    }
    public int sumNumbers(TreeNode root) {
        traversal(root, 0);
        return ans;
    }
}
