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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        unordered_map<int, ListNode*> umap;

        ListNode* temp = head;
        int ctr = 0;
        while (temp != NULL) {
            ctr++;
            umap[ctr] = temp;
            temp = temp->next;
        }

        ListNode *oddhead = umap[1], *evenhead;
        head = oddhead;
        if (ctr > 1) {
            evenhead = umap[2];
            temp = evenhead;
        }

        for (int i = 3; i <= ctr; i++) {

            if (i % 2 != 0) {
                oddhead->next = umap[i];
                oddhead = oddhead->next;
            } else {
                evenhead->next = umap[i];
                evenhead = evenhead -> next;
            }
        }
        if(ctr > 1)
        evenhead->next = NULL;
        oddhead->next = temp;
        return head;
    }
};