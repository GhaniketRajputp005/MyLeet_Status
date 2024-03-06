/*
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

    ListNode* findmiddle(ListNode* head){
       ListNode* slow = head, *fast = head,*prev_slow = head;
       while(fast != NULL && fast->next != NULL){
           if(slow != head) prev_slow = prev_slow->next;
           slow = slow->next;
           fast = fast->next->next;
       }
       if(fast == NULL)
       return prev_slow;
       return slow;
       
    }
    
    ListNode* merge(ListNode* lefthead, ListNode*righthead){
        ListNode* temphead_left = new ListNode(0);
        ListNode* temphead_right = new ListNode(0);
        ListNode *head_left = temphead_left;
        
        while(lefthead && righthead){
            if(lefthead->val <= righthead->val){
                temphead_left->next = lefthead;
                temphead_left = lefthead;
                lefthead = lefthead->next;
                
            }
            else{
                
                temphead_left->next = righthead;
                temphead_left = righthead;
                righthead = righthead->next;
            }
        }
        if(lefthead == NULL) temphead_left->next = righthead;
        else if(righthead == NULL) temphead_left->next = lefthead;
        return head_left->next;
        
    }

   ListNode*  mergesort(ListNode* head){

        if(head == NULL || head->next == NULL) return head;

        ListNode* middle = findmiddle(head);
        ListNode* lefthead = head, * righthead = middle->next;
        middle->next  = NULL;

        lefthead = mergesort(lefthead);
        righthead = mergesort(righthead);
        
       return  merge(lefthead, righthead);
       
    }



    ListNode* sortList(ListNode* head) {

    head = mergesort(head);
   return head;

////////// BUBBLE sort////////////

        // if(head == NULL || head->next == NULL)
        // return head;
        // ListNode* first = head, *second = NULL;
        // while(first)
        // {
        //     second = first->next;
         
        //     while(second){
        //         //   cout<<"second->val"<< second->val<<" ";
        //      if(first->val > second->val)
        //         swap(first->val , second->val);
        //      second = second->next;
                
        //     }
        
        //      first = first->next;
        // }
        // return head;
    }
};