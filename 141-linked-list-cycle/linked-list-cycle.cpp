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
    bool hasCycle(ListNode *head) {

        if(head == NULL) return false;
        ListNode* fast = head->next;
        ListNode* slow = head;

        while(fast != slow ){
            if(fast == NULL || fast-> next == NULL) return false;
            slow = slow->next;
            fast = fast->next->next;

        }
return true;

//////////////// USING HASHSET ////////////

        // unordered_map<ListNode*,int>umap;
        // while(head!=NULL){
            
        //     umap[head]++;
        //     if(umap[head] == 2){
        //         return true;
        //     }
        //     head = head->next;
           
        
        // }
        // return false;
        
    }
};