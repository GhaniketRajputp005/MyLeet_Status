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
    void dfs (TreeNode* root, int* value, int* depth, int* maxdepth) {

        if (root == NULL)
             { return; }

        (*depth)++;
        if (*depth >  * maxdepth)
             {
                *maxdepth = *depth;
                  * value = root->val;
            }

        dfs(root->left, value, depth, maxdepth);

        dfs(root->right, value, depth, maxdepth);
        (*depth)--;
    }

    int findBottomLeftValue(TreeNode* root) {
        int value = 0, depth = -1, maxdepth = -1;
        dfs (root, &value, &depth, &maxdepth);
        return value;
    }
};