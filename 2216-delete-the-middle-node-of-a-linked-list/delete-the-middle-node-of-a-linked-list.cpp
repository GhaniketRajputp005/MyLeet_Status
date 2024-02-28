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
    ListNode* deleteMiddle(ListNode* head) {
          if(head->next == NULL) return NULL;
    vector<ListNode*>v;
    ListNode* temp = head;
    while(temp!= NULL){
        v.push_back(temp);
        temp = temp->next;
    }
    temp = v[v.size()/2 -1];
    temp->next = temp->next->next;
   
    return head;
    //     if(head->next == NULL){
    //         return NULL;
    //     }
    //    ListNode* slow = head, *fast = head;
    //    while(fast !=NULL && fast->next!=NULL&&fast->next->next!= NULL){
    //        slow = slow->next;
    //        fast = fast->next->next;
    //    } 

    //      ListNode* n = slow->next;
    //    slow->next = slow->next->next;
      
    //     delete n;
    //     return head;
    }
};