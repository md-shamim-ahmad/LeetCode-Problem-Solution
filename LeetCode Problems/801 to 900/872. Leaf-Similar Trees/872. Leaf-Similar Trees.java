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
    private List<Integer> list = new ArrayList<Integer>();
    private void helper(TreeNode root) {
        if (root == null) return;
        if (root.left == null && root.right == null) {
            list.add(root.val);
        }
        helper(root.left);
        helper(root.right);
    }
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        helper(root1);
        List<Integer> list1 = list;
        list = new ArrayList<Integer>();
        helper(root2);
        if (list1.size() != list.size()) return false;
        for (int i = 0; i < list.size(); i++) {
            if (list1.get(i) != list.get(i)) return false;
        }
        return true;
    }
}
