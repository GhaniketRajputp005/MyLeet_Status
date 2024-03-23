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
    void reorderList(ListNode* head) {
        if(head->next == NULL || head->next->next == NULL){
            return ;
        }
        
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        fast = slow->next;
        slow->next = NULL;
        stack<ListNode*>st;

        while(fast != NULL){
            st.push(fast);
            fast = fast->next;
        }

        slow = head;
        while(!st.empty()){
            fast = slow->next;
            slow->next = st.top();
            st.pop();
            slow->next->next = fast;
            slow = fast;
        }

      

    }
};