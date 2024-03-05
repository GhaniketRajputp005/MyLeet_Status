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
    ListNode* reverse(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *first = head, *after = head->next;
        first->next = NULL;
        while (after != NULL) {
            ListNode* temp = after->next;
            after->next = first;
            first = after;
            after = temp;
        }

        return first;
    }

    bool isPalindrome(ListNode* head) {

        ListNode *temp = head, *fast = head, *slow = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            // by doing fast->next->next!= NULL we are ensuring slow points to
            // the right half.

            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondhead = reverse(slow->next);

        while (secondhead != NULL) {

            if (secondhead->val != temp->val)
                return false;

            secondhead = secondhead->next;
            temp = temp->next;
        }

        secondhead = reverse(slow->next);

        return true;
    }
};