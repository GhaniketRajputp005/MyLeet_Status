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
    ListNode* partition(ListNode* head, int x) {

      if (head == NULL || head->next == NULL)
            return head;


        ListNode* morehead = new ListNode(0);
        ListNode* lesshead = new ListNode(0);
        ListNode* m_head = morehead;
        ListNode* l_head = lesshead;
        ListNode*temp = head;

        while(temp){

            if( temp->val < x){
                lesshead->next = temp;
                lesshead = temp;
            }
            else{
                
                morehead->next = temp;
                morehead = temp;
            }
            temp = temp->next;
        }
        
        lesshead->next = m_head->next;
        morehead->next = NULL;
        return l_head->next;
    }



        






        // ListNode *temp = head, *more_head = NULL, *less_head = NULL,
        //          *m_head = NULL, *l_head = NULL;


    //     while (temp != NULL) {

    //         if (temp->val < x) {
    //             if (less_head == NULL) {
    //                 less_head = temp;
    //                 l_head = less_head;
    //             } else {
    //                 less_head->next = temp;
    //                 less_head = less_head->next;
    //             }
    //         } else {
    //             if (more_head == NULL) {
    //                 more_head = temp;
    //                 m_head = more_head;
    //             } else {
    //                 more_head->next = temp;
    //                 more_head = more_head->next;
    //             }
    //         }
    //         temp = temp->next;
    //     }

    //     if(l_head == NULL){
    //         more_head->next = NULL;
    //         return m_head;
    //     }
    //     else if(m_head == NULL){
    //         less_head->next = NULL;
    //         return l_head;
    //     }

    //     less_head->next = m_head;
    //     more_head->next = NULL;
    //     return l_head;
    // }
};