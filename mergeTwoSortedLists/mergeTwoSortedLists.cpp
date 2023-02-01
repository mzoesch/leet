// 20230131 -- easy

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


class Solution {

public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr && list2 == nullptr)
            return nullptr;
        if (list1 != nullptr && list2 == nullptr)
            return list1;
        if (list1 == nullptr && list2 != nullptr)
            return list2;

        ListNode *head = nullptr;

        if (list1->val <= list2->val) {
            head = list1;

            if (list1->next == nullptr)
                list1 = nullptr;
            else list1 = list1->next;
        } else {
            head = list2;

            if (list2->next == nullptr)
                list2 = nullptr;
            else list2 = list2->next;
        }

        ListNode *cursor = head;

        while (true) {
            
            if (list1 == nullptr && list2 == nullptr)
                break;
            if (list1 != nullptr && list2 == nullptr) {
                cursor->next = list1;
                            cursor = cursor->next;

                if (list1->next == nullptr)
                    list1 = nullptr;
                else list1 = list1->next;
                
                continue;
            }
            if (list1 == nullptr && list2 != nullptr) {
                cursor->next = list2;
                cursor = cursor->next;                

                if (list2->next == nullptr)
                    list2 = nullptr;
                else list2 = list2->next;

                continue;
            }

            if (list1->val < list2->val) {
                cursor->next = list1;
                cursor = cursor->next;

                if (list1->next == nullptr)
                    list1 = nullptr;
                else list1 = list1->next;

                continue;
            }
            
            cursor->next = list2;
            cursor = cursor->next;

            if (list2->next == nullptr)
                list2 = nullptr;
            else list2 = list2->next;

            continue;
        }
        

        return head;
    }
}
;
