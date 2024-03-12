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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev =  dummy;
        
        while( prev != NULL){
            int sum = 0;
            ListNode* after = prev->next;
            
            while(after != NULL){
                
                sum =sum + after->val;
                if(sum == 0){
                
                    prev->next = after->next;
                   
                    
                }
                after = after->next;
            }
            prev = prev->next;
        }
        return dummy->next;
    }
};