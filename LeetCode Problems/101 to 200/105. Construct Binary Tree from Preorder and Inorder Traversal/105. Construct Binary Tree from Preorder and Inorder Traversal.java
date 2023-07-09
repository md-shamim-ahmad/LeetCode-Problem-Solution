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
    HashMap<Integer, Integer> mapVal2Idx = new HashMap<>();
    int preIdx = 0;
    
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        int n = inorder.length;
        for (int i = 0; i < n; ++i) mapVal2Idx.put(inorder[i], i);
        return dfs(0, n - 1, preorder);
    }
    
    TreeNode dfs(int left, int right, int[] preorder) {
        if (left > right) return null;
        TreeNode root = new TreeNode(preorder[preIdx++]);
        int mid = mapVal2Idx.get(root.val);
        root.left = dfs(left, mid - 1, preorder);
        root.right = dfs(mid + 1, right, preorder);
        return root;
    }
}