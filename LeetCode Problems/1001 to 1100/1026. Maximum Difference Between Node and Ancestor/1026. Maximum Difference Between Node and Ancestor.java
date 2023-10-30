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
    private int helper(TreeNode root, int mn, int mx) {
        if (root == null) return mx - mn;
        mn = Math.min(mn, root.val);
        mx = Math.max(mx, root.val);
        return Math.max(helper(root.left, mn, mx), helper(root.right, mn, mx));
    }
    public int maxAncestorDiff(TreeNode root) {
        return helper(root, 10000000, 0);
    }
}
