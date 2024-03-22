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
        // cout<<slow->val;

        if(slow == NULL) cout<<"mai NULL";
        if (slow == NULL||slow->next == NULL)
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

        ListNode* temp1 = head;

      
        while(temp1 != slow){
            cout<< temp1->val<<" ";
            temp1 = temp1->next;
        }

        cout<<"slow = "<<slow->val;
        if(slow == NULL) cout<<"kya NULL\n";
        ListNode* head2 = reverse(slow);

        while (head2 != NULL) {

            if (temp->val != head2->val) {
                return false;
            }

            head2 = head2->next;
            temp = temp->next;
        }

        head2 = reverse(head2);
        return true;
    }
};