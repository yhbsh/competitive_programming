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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        TreeNode *current = root;
        stack<TreeNode *> stack;
        if (root == nullptr)
            return ans;
        do
        {
            if (current != nullptr)
            {
                if (current->right != nullptr)
                    stack.push(current->right);
                stack.push(current);

                current = current->left;
            }
            else
            {
                current = stack.top();
                stack.pop();

                if (stack.empty() == false && current->right != nullptr && current->right == stack.top())
                {
                    stack.pop();
                    stack.push(current);
                    current = current->right;
                }
                else
                {
                    // cout << current->val << '|'; // visit the node
                    ans.push_back(current->val);
                    current = nullptr;
                }
            }

        } while (stack.empty() == false);

        return ans;
    }
};