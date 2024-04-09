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
    int goodNodeUtil(TreeNode* root, int maxN){
        if(root == NULL) return 0;
        if(root->val >= maxN){
            int l = goodNodeUtil(root->left, root->val);
            int r = goodNodeUtil(root->right, root->val);
            return l + r + 1;
        }
        else{
            int l = goodNodeUtil(root->left, maxN);
            int r = goodNodeUtil(root->right, maxN);
            return l + r;
        }
    }

    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        else return goodNodeUtil(root, root->val );
    }
};