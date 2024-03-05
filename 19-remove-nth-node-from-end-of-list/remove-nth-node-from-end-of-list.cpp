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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // ////// o(N), O(1), optimal

       ListNode *secondhead = head, *firsthead = head;

        //  make firsthead travel n nodes
        for (int i = 0; i < n; i++) {
            firsthead = firsthead->next;
        }

        if(firsthead == NULL) {
            head = head->next;
            return head;
        }
        
        while(firsthead->next != NULL){
            firsthead = firsthead->next;
            secondhead = secondhead->next;
        }
        
        ListNode* temp = secondhead->next;
        secondhead->next = temp->next;
        delete temp;
        return head;
    }

    ////////////    O(N),o(N) one pass/////////

    //     int ctr = 0;
    //     unordered_map<int,ListNode*> umap;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         ctr++;
    //         umap[ctr] = temp;
    //         temp = temp->next;
    //     }

    //     if(ctr == n){
    //         head= head->next;
    //         return head;
    //     }
    //     umap[ctr - n]->next= umap[ctr - n+1]->next;

    //     return head;
    // }

    // /////////    int ctr =0;  O(N),o(N), two pass.//////////

    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         ctr++;
    //         temp = temp->next;
    //     }

    // if( n == ctr ) {
    //     head= head->next;
    //     return head;
    // };

    //     int val = ctr - n -1;
    //     temp = head;

    //     while(val--){
    //         temp = temp->next;
    //     }
    //     temp->next = temp->next->next;
    //      return head;

    // }
};