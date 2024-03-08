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

        ListNode* temp1 = headA,*temp2 = headB;
        int la = 0, lb = 0;
        while (temp1 != NULL || temp2 != NULL) {
            if(temp1!=NULL){
            la++;
            temp1 = temp1->next;
            }
            if(temp2 != NULL ){
                lb++;
                temp2 = temp2->next;
            }
        }
       

        int diff = la - lb;
        
            if (diff > 0) {
                

                while (diff--) {
                    headA = headA->next;
                }
            } else {
                

                while (diff++) {
                    headB = headB->next;
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