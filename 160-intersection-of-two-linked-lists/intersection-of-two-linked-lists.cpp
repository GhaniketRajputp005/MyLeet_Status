/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* temp = headA;
        int la = 0, lb = 0;
        while (temp != NULL) {
            la++;
            temp = temp->next;
        }
        temp = headB;
        while (temp != NULL) {
            lb++;
            temp = temp->next;
        }

        int diff = 0;
        if (la == lb)
            ;
        else {
            if (la > lb) {
                diff = la - lb;

                while (diff--) {
                    headA = headA->next;
                }
            } else {
                diff = lb - la;

                while (diff--) {
                    headB = headB->next;
                }
            }
        }

        while (headB != NULL) {
            if (headB == headA) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};