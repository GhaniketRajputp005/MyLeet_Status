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
    ListNode* insertionSortList(ListNode* head) {


      ListNode* dummyhead = new ListNode(0);
      dummyhead->next = head;
      
      ListNode* prev = dummyhead;
      ListNode* after = dummyhead->next;
      
      ListNode* temp = NULL;
      ListNode* beforetemp = head;
      
      while(beforetemp ->next != NULL){
           temp = beforetemp->next;
          int flag = 0;
          while(temp->val < beforetemp->val &&  prev->next == after  ){
              flag = 1;
              if(after->val >= temp->val){
                  beforetemp->next = temp->next;
                  temp->next = after;
                  prev->next = temp;
                  
                  
              }
              prev = prev->next;
              after = after->next;

          }
          
          if(flag == 0) beforetemp = beforetemp->next;
         
          prev = dummyhead;
          after = dummyhead->next;
      }
      
      return dummyhead->next;
      

    }
};