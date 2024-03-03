/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *fp = head, *sp = head, *check = head;

        while(fp != NULL && fp->next != NULL){


            fp = fp->next->next;
            sp = sp->next;
            if(fp == sp ){
                while(sp != check){
                    sp= sp->next;
                    check = check->next;
                }
                return sp;
            }
        }
        return NULL;

        // unordered_map<ListNode*, int >umap;

        // while(head!=NULL){

        //     umap[head]++;
        //     if(umap[head]==2) return head;
        //     head = head->next;
        // }
        // return NULL;
        
    }
};