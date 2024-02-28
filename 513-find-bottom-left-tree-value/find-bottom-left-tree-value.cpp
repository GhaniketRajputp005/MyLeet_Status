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
    void dfs (TreeNode* root, int* value, int depth, int* maxdepth) {

        if (root == NULL)
             { return; }

      
        if (depth >  * maxdepth)
             {
                *maxdepth = depth;
                  * value = root->val;
            }

        dfs(root->left, value, depth+1, maxdepth);

        dfs(root->right, value, depth+1, maxdepth);

    }

    int findBottomLeftValue(TreeNode* root) {
        int value = 0, depth = 0, maxdepth = -1;
        dfs (root, &value, 0, &maxdepth);
        return value;
    }
};