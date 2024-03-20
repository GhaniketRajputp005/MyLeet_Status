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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* list2end = list2;
        ListNode* list1a = list1;
        ListNode* list1b = list1;
        ListNode* temp = list1;
        //ListNode* dumhead = new ListNode(0);
        //dumhead->next = list1;

        while(list2end->next != NULL){
            list2end = list2end->next;
        }

        a--;
        while(b != 0){
            if(a){
                list1a = list1a->next;
                a--;
            }
        
                list1b = list1b->next;
                b--;
          
        }

        list1a->next = list2;
        list2end->next = list1b->next;
        return list1;




    }
};