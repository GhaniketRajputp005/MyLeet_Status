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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode *fp, *sp, *tp;
        fp = head;
        sp = fp->next;
        tp = sp->next;

        if (sp->next == NULL || tp->next == NULL) {
            return {-1, -1};
        }

        int ctl_ctr = 0;
        int node_ctr = 2;
        vector<int> result;

        while (tp != NULL) {

            if ((fp->val > sp->val && tp->val > sp->val) ||
                (fp->val < sp->val && tp->val < sp->val)) {
                ctl_ctr++;
                result.push_back(node_ctr);
            }
            node_ctr++;
            fp = sp;
            sp = tp;
            tp = tp->next;
        }
        for(int i = 0 ; i< ctl_ctr; i++){
            cout<< result[i] <<" ";
        }

        if (ctl_ctr > 1) {

            int minm = INT_MAX;

            for(int i = ctl_ctr - 1; i > 0; i--){
            minm = min(minm,result[i] -  result[i - 1]);
            }
            int max = result[ctl_ctr - 1] - result[0];

            result.clear();
            result.push_back(minm);
            result.push_back(max);
            return result;
        }
        return {-1, -1};
    }
};