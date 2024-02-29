class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        int ctr = -1;
        q.push(root);
        while (!q.empty()) {
            int n = q.size(), max = INT_MIN, min = INT_MAX;
            ctr++;
            while (n--) {
                
                if (ctr % 2 == 0) {
                    if (q.front()->val % 2 != 0 && q.front()->val > max) {
                        max = q.front()->val;
                    } else {
                        return false;
                    }
                } else {
                    if (q.front()->val % 2 == 0 && q.front()->val < min) {
                        min = q.front()->val;
                    } else {
                        return false;
                    }
                }
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }

                q.pop();
            }
        }
        return true;
    }
};