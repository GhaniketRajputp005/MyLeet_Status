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
    ListNode *detectCycle(ListNode *head) {

        unordered_map<ListNode*, int >umap;

        while(head!=NULL){

            umap[head]++;
            if(umap[head]==2) return head;
            head = head->next;
        }
        return NULL;
        
    }
};