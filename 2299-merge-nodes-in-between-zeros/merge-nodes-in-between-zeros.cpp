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
    // ListNode* mergeNodes(ListNode* head) {

    //     ListNode *curr_node = head->next, *value = head,
    //     int sum = 0;

    //     while (curr_node != NULL) {

    //         sum += curr_node->val;

    //         if (curr_node->val == 0) {
    //             value->val = sum;
    //             sum = 0;
    //             value->next = curr_node->next;
    //             // temp = value;
    //             value = value->next;
    //         }

    //         curr_node = curr_node->next;
    //     }
    //     // temp->next = NULL;
    //     return head;
    // }
      ListNode* mergeNodes(ListNode* head) {
    ListNode *curr_node = head->next, *value = head;
        if(curr_node == NULL) return curr_node;

    
        int sum = 0;

        while (curr_node != NULL && curr_node->val != 0) {

            sum += curr_node->val;
            curr_node = curr_node->next;
        }
        value->val = sum;
        value->next = mergeNodes(curr_node);
        
        return value;
    }
};