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
    ListNode* reverse(ListNode* slow) {

        if (slow->next == NULL)
            return slow;
        ListNode *before = slow, *after = slow->next;
        before->next = NULL;

        while (after != NULL) {
            ListNode* temp = after->next;
            after->next = before;
            before = after;
            after = temp;
        }

        return before;
    }

    bool isPalindrome(ListNode* head) {

        if (head->next == NULL)
            return true;
        ListNode *temp = head, *fast = head, *slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* head2 = reverse(slow);

        ListNode* temp1 = head2;
        while (head2 != NULL) {

            if (temp->val != head2->val) {
                return false;
            }

            head2 = head2->next;
            temp = temp->next;
        }

    reverse(temp1);
        return true;
    }
};