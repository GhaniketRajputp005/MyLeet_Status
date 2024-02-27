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

       if(head ==  NULL) return NULL;
       else if(head->next==NULL) return head;

        vector<int>v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(int i = v.size()-1; i>=0; i--){
            temp->val = v[i];
            temp = temp->next;
        }
        return head;
        
    }
};