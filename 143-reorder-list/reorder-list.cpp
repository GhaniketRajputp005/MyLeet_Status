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

    ListNode * curr;
    void reorder( ListNode* slow){
        if(slow == NULL) return;

        reorder( slow->next);
        
        ListNode* currnxt = curr->next;
        curr->next = slow;
        slow->next = currnxt;
        curr = currnxt;


    }


    void reorderList(ListNode* head) {
        if(head->next == NULL || head->next->next == NULL){
            return ;
        }
        
        curr = head;

        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        fast = slow;
        reorder( slow->next);
        fast->next = NULL;












        
        // slow->next = NULL;
        // stack<ListNode*>st;

        // while(fast != NULL){
        //     st.push(fast);
        //     fast = fast->next;
        // }

        // slow = head;
        // while(!st.empty()){
        //     fast = slow->next;
        //     slow->next = st.top();
        //     st.pop();
        //     slow->next->next = fast;
        //     slow = fast;
        // }

      

    }
};