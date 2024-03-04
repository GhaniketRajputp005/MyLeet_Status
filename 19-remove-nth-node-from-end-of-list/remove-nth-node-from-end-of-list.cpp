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

        // ////// o(N), O(1)

        int ctr = 0;
        ListNode* previous = head, *after = head;
        while(1){

            if(after != NULL){
                after = after->next;
                cout<<"ctr1 = "<<ctr<<endl;
                ctr++;
            }
            else{
                cout<<"ctr = "<<ctr<<endl;
                if(ctr == n){
                    head = head->next;
                    return head;
                }
                int val = ctr - n - 1;
                cout<<val<<endl;
                while(val--){
                    previous = previous->next;
                }
                previous->next = previous->next->next;
                return head;  
            }
            
        }
        return 0;
    }

////////////    O(N),o(N) one pass
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




    //     int ctr =0;  O(N),o(N), two pass.
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