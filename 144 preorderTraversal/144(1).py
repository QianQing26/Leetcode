# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans=[]
        if not root:
            return ans
        stack=[]
        node=root
        while stack or node:
            while node:
                ans.append(node.val)
                stack.append(node)
                node=node.left
            node=stack.pop()
            node=node.right
        return ans    