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
    private List<Integer> arr = new ArrayList<>();
    private void PreorderTraversal(TreeNode root) {
        if (root == null) return;
        arr.add(root.val);
        PreorderTraversal(root.left);
        PreorderTraversal(root.right);
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        PreorderTraversal(root);
        return arr;
    }
}
