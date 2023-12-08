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
    private String preOrder(TreeNode root) {
        StringBuilder str = new StringBuilder("");
        if (root == null) {
            return "";
        }
        str.append("(").append(String.valueOf(root.val));
        if (root.left == null && root.right != null) {
            str.append("()");
        }
        str.append(String.valueOf(preOrder(root.left))).append(String.valueOf(preOrder(root.right))).append(")");
        return str.toString();
    }
    public String tree2str(TreeNode root) {
        String s = preOrder(root);
        return s.substring(1, s.length() - 1);
    }
}