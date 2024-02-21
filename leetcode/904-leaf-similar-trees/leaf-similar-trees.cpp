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

    void dfs(TreeNode* t, vector<int> &ar){
        if(t == NULL) return;
        else{
            if(t->left == NULL && t->right==NULL){
                ar.push_back(t->val);
                return;
            }
            dfs(t->left, ar);
            dfs(t->right, ar);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> t1;
        vector<int> t2;

        dfs(root1, t1);
        dfs(root2, t2);

        return t1 == t2;
    }
};