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

        ListNode *temp = head, *more_head = NULL, *less_head = NULL,
                 *m_head = NULL, *l_head = NULL;

        while (temp != NULL) {

            if (temp->val < x) {
                if (less_head == NULL) {
                    less_head = temp;
                    l_head = less_head;
                } else {
                    less_head->next = temp;
                    less_head = less_head->next;
                }
            } else {
                if (more_head == NULL) {
                    more_head = temp;
                    m_head = more_head;
                } else {
                    more_head->next = temp;
                    more_head = more_head->next;
                }
            }
            temp = temp->next;
        }

        if(l_head == NULL){
            more_head->next = NULL;
            return m_head;
        }
        else if(m_head == NULL){
            less_head->next = NULL;
            return l_head;
        }

        less_head->next = m_head;
        more_head->next = NULL;
        return l_head;
    }
};