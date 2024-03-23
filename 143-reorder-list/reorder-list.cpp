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
        
        stack<ListNode*>st;

        ListNode* temp = head;
        while(temp != NULL){
            st.push(temp);
            temp = temp->next;
        }

        int k = st.size()/2;
        temp = head;
        

        while(k--){
            ListNode* topnode = st.top();
            st.pop();
            ListNode* tempnxt = temp->next;

            temp->next = topnode;
            topnode->next = tempnxt;
            temp = tempnxt;
        }
        temp->next = NULL;



      

    }
};