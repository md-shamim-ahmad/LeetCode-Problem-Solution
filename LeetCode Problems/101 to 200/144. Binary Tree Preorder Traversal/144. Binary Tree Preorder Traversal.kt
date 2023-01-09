/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    var arr = ArrayList<Int>();
    private fun PreorderTraversal(root: TreeNode?) {
        if(root == null)
            return;
        arr.add(root.`val`);
        PreorderTraversal(root.left);
        PreorderTraversal(root.right);
    }
    fun preorderTraversal(root: TreeNode?): List<Int> {
        PreorderTraversal(root);
        return arr;
    }
}