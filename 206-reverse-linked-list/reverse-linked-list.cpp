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
    ListNode* reverseList(ListNode* head) {

// //////////// Iterative //////////////
    //  ListNode* lastnode = NULL;
    //    ListNode *nextnode;
      
    //    while(head!=NULL){
    //        nextnode = head->next;
    //        head->next = lastnode;
    //        lastnode = head;
    //        head = nextnode;
    //    }
    //    return lastnode;
        
    // }


    //////////Recursive

    if(head == NULL || head->next == NULL){
        return head;
    }

    ListNode* newhead = reverseList(head->next);// to keep track of our new head
    head->next->next = head;
    head->next = NULL;

    return newhead;
    }
};