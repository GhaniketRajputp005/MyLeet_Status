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
    ///////////       DFS ///////////////////////

    // void dfs (TreeNode* root, int* value, int depth, int* maxdepth) {

    //     if (root == NULL)
    //          { return; }

      
    //     if (depth >  * maxdepth)
    //          {
    //             *maxdepth = depth;
    //               * value = root->val;
    //         }

    //     dfs(root->left, value, depth+1, maxdepth);

    //     dfs(root->right, value, depth+1, maxdepth);

    // }


    int bfs(TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        int result;
         TreeNode* n;
        while(!q.empty()){
           n = q.front();
            q.pop();
            result = n->val;
            if(n->right ){
                q.push(n->right);
            }
            if(n->left){
                q.push(n->left);
            }
            
        }
        return result;
    }

    int findBottomLeftValue(TreeNode* root) {
        // int value = 0, depth = 0, maxdepth = -1;
        // dfs (root, &value, 0, &maxdepth);

        int value = bfs(root);
        return value;
    }
};