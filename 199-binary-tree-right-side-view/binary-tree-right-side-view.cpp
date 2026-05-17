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
    int lvl=0;
    vector<int>res;
    vector<int> rightSideView(TreeNode* root) {
     if(root==nullptr){
        return res;
     }
     if(lvl==res.size()){
        res.push_back(root->val);
     }
          lvl++;
        rightSideView(root->right);
        lvl--;

        lvl++;
        rightSideView(root->left);
        lvl--;
     return res;   
    }
};