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
class Solution
{
public:
    bool helper(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr and q == nullptr)
            return true;
        if ((p == nullptr and q != nullptr) or (p != nullptr and q == nullptr))
            return false;
        if (p->val != q->val)
            return false;

        return helper(p->left, q->left) && helper(p->right, q->right);
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        return helper(p, q);
    }
};