/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* list1a = NULL;
        ListNode* list1b = list1;

        int i = 0;
        while (i <= b) {
            if (i == a - 1) {
                list1a = list1b;
            }

            list1b = list1b->next;
            i++;
        }

        list1a->next = list2;

        ListNode* list2end = list2;
        while (list2end->next != NULL) {
            list2end = list2end->next;
        }
      
        list2end->next = list1b;
        return list1;
    }
};