# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        stk = []
        stk.append(root.left)
        stk.append(root.right)
        while stk:
            leftNode = stk.pop()
            rightNode = stk.pop()
            if (not leftNode) and (not rightNode):
                continue
            if (not leftNode) or (not rightNode) or (leftNode.val!=rightNode.val):
                return False
            stk.append(leftNode.left)
            stk.append(rightNode.right)
            stk.append(leftNode.right)
            stk.append(rightNode.left)
        return True