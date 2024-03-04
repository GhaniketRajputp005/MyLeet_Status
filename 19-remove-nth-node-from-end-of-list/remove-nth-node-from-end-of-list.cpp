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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int ctr =0;
        ListNode* temp = head;
        while(temp != NULL){
            ctr++;
            temp = temp->next;
        }

    if( n == ctr ) {
        head= head->next;
        return head;
    };

        int val = ctr - n -1;
        temp = head;

        while(val--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
         return head;

    }
};