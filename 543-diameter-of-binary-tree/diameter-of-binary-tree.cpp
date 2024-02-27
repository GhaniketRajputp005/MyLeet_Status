/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int maxdia(TreeNode* root,int *maxsize){
        int left = 0,right = 0;
        if(root== NULL  ){
            return 0;
        }
        left = maxdia(root->left, maxsize);
        right = maxdia(root->right, maxsize);
        *maxsize = max(*maxsize, left + right);
        return max(left, right) + 1;


    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxsize = 0;
        int val = maxdia(root, &maxsize );
        return maxsize;
    }
};