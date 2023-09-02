# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode],carry=0) -> Optional[ListNode]:
        # 递归法
        if l1 is None and l2 is None:
            return ListNode(carry)if carry else None
        if l1 is None:
            l1,l2=l2,l1
        carry+= l1.val+(l2.val if l2 else 0)
        l1.val=carry%10
        l1.next=self.addTwoNumbers(l1.next,l2.next if l2 else None,carry//10)
        return l1