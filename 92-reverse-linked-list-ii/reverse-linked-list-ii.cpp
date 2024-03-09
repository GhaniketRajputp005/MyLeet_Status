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
    ListNode* reverse(ListNode* head, int diff){
        ListNode*before = head;
        ListNode*after = head->next;
        before->next = NULL;
        
        while(diff--){
            
            ListNode*temp = after->next;
            after->next = before;
            
            before = after;
            after = temp;
            
        }
        return before;
    }


    ListNode* reverseBetween(ListNode* head, int left, int right) {


        if(left == right) return head;
    ListNode* dummy = new ListNode(0,head),*temp,*leftnode,*rightnode;
    int ctr = 0;
    
    temp = dummy;
    int  i = 0;
    while(i <= right){
        if( i + 1 == left ){
            leftnode = temp;
        }
        if(i == right){
            rightnode = temp->next;
        }
        temp = temp->next;
        i++;
    }
    
    temp = leftnode->next;
    head = reverse(leftnode->next, right-left);
    
    leftnode->next = head;
    temp->next = rightnode;
    return dummy->next;
    

    }
};