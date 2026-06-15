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
private:
bool check(TreeNode* a, TreeNode* b)
{
    if(!a && !b) return true;

    if(!a || !b) return false;

    if(a->val != b->val) return false;

    return check(a->left, b->left) &&
           check(a->right, b->right);
}

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* n = q.front();
            if(n->left ) q.push(n->left);
            if(n->right) q.push(n->right);
            if(n->val == subRoot->val && check(n,subRoot) )
            {
               return true;
            }
            q.pop();
        }

        return false;
    }
};
