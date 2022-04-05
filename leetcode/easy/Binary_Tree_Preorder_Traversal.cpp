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
#include <stack>
#include <vector>

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s;

        if (root == nullptr)
            return ans;

        TreeNode *curr = root;
        do
        {
            if (curr != nullptr)
            {
                ans.push_back(curr->val);
                if (curr->right != nullptr)
                    s.push(curr->right);
                curr = curr->left;
            }
            else
            {
                curr = s.top();
                s.pop();
            }
        } while (s.empty() == false || curr != nullptr);

        return ans;
    }
};