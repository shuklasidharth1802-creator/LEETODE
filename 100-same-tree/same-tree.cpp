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
bool fun(TreeNode* p, TreeNode* q){
    if(p==nullptr && q==nullptr){

        return true;
    }
    if(p==nullptr || q==nullptr){
        return false;
    }
    if(p->val != q->val){
        return false;
    }
    bool r1 = fun(p->left , q->left);
    bool r2= fun(p->right, q->right);
    
    return r1 && r2;
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int ans =fun(p,q);
        return ans;
        
    }
};