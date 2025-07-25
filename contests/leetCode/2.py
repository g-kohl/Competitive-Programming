# https://leetcode.com/problems/add-two-numbers/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        result = ListNode()
        current = result
        carry = 0

        while l1 or l2 or carry:
            l1_val = l1.val if l1 else 0
            l2_val = l2.val if l2 else 0

            carry, digit = divmod(l1_val + l2_val + carry, 10)
            current.val = digit

            if l1: l1 = l1.next
            if l2: l2 = l2.next

            if l1 or l2 or carry:
                current.next = ListNode()
                current = current.next

        return result