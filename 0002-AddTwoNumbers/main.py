# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        x = 0
        out = None
        cursor = None
        while ...:
            if l1 is None and x == 0:
                cursor.next = l2
                break
            if l2 is None and x == 0:
                cursor.next = l1
                break
            if l1 is None and l2 is None:
                cursor.next = ListNode(1, None)
                break

            if l1 is None:
                _sum = l2.val + x
                x = 0
                if _sum >= 10:
                    x = 1
                    _sum = _sum - 10
                cursor.next = ListNode(_sum, None)
                cursor = cursor.next
                l2 = l2.next
                continue

            if l2 is None:
                _sum = l1.val + x
                x = 0
                if _sum >= 10:
                    x = 1
                    _sum = _sum - 10
                cursor.next = ListNode(_sum, None)
                cursor = cursor.next
                l1 = l1.next
                continue

            sum = l1.val + l2.val + x
            x = 0
            if sum >= 10:
                x = 1
                sum = sum - 10

            if out is None:
                out = ListNode(sum, None)
                cursor = out
            else:
                cursor.next = ListNode(sum, None)
                cursor = cursor.next

            l1 = l1.next
            l2 = l2.next
            continue

        return out
