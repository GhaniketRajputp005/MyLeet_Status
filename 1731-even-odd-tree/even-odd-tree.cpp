/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
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
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
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

                q.pop();
            }
        }
        return true;
    }
};