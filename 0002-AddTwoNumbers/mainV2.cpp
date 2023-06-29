/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }
 * ;
 */


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
}
;


class Solution {

public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        
        int carry = 0;
        int x = l1->val + l2->val;
        l1 = l1->next;
        l2 = l2->next;

        if (x >= 10) {
            x -= 10;
            carry = 1;
        }

        ListNode* head = new ListNode(x);
        ListNode* cursor = head;
        
        while (!(l1 == nullptr && l2 == nullptr)) {
            
            if (l1 == nullptr) {

                l2->val += carry;
                if (l2->val >= 10) {
                    l2->val -= 10;
                    carry = 1;
                } else carry = 0;

                cursor->next = l2;
                l2 = l2->next;
                cursor = cursor->next;
               
               continue;
            }
            
            if (l2 == nullptr) {
                
                l1->val += carry;
                if (l1->val >= 10) {
                    l1->val -= 10;
                    carry = 1; 
                } else carry = 0;

                cursor->next = l1;
                l1 = l1->next;
                cursor = cursor->next;

                continue;
            }

            cursor->next = new ListNode((l1->val + l2->val + carry), nullptr);
            cursor = cursor->next;

            if (cursor->val >= 10) {
                cursor->val -= 10;
                carry = 1;
            } else carry = 0;

            l1 = l1->next;
            l2 = l2->next;

            continue;
        }

        if (carry == 1)
            cursor->next = new ListNode(1, nullptr);
        
        return head;
    }
}
;
