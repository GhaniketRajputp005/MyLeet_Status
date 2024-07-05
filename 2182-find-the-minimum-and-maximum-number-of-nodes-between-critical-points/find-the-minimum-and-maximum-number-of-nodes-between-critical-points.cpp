
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

        int ctl_ctr = 0, prev_ctl_node = 0;
        int node_ctr = 2;
        vector<int> result;
        int minm =INT_MAX, maxm = 0,diff = 0,flag = 0;

        while (tp != NULL) {

            if ((fp->val > sp->val && tp->val > sp->val) ||
                (fp->val < sp->val && tp->val < sp->val)) {
  
                if(flag){
                    diff = node_ctr - prev_ctl_node;   
                     minm = min(minm, diff);
                     maxm +=  diff;
                }
                cout<<minm<<" "<<maxm<<endl;
                ctl_ctr++;
                prev_ctl_node = node_ctr; 
                flag = 1; 
            }
            node_ctr++;
            fp = sp;
            sp = tp;
            tp = tp->next;
        }

        if(ctl_ctr <2) return {-1, -1};
        return {minm, maxm};
    }
};