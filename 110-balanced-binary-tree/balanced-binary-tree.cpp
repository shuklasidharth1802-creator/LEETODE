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
pair<int,bool> fun(TreeNode* root){
    if(root==nullptr){
        return{0,true};

    }
    auto left= fun(root->left);
    auto right= fun(root->right);

    int height= 1+max(left.first, right.first);

    abs(left.first-right.first)<=1;

   bool balance=  left.second && right.second && abs(left.first-right.first)<=1;

    return {height, balance};
}
    bool isBalanced(TreeNode* root) {

              return fun(root).second;
        
    }
};