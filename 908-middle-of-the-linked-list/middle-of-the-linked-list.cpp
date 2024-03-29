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
    ListNode* middleNode(ListNode* head) {

        int ctr = 0;
        ListNode* n = head;
        vector<ListNode*>v;
        while(head!=NULL){
            v.push_back(head);
            head = head->next;
        }

        return v[v.size()/2];
        
        
    }
};