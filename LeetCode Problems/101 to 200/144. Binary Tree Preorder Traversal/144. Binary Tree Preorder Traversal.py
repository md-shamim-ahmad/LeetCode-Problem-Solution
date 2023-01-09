# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:    
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        return [] if not root else   ([root.val]+
                self.preorderTraversal(root.left)+
                self.preorderTraversal(root.right))