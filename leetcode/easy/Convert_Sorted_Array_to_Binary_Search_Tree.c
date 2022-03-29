/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *neNode(int data)
{
    struct TreeNode *node = (struct TreeNode *)
        malloc(sizeof(struct TreeNode));
    node->val = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}
struct TreeNode *ArrayToBST(int arr[], int start, int end)
{
    /* Base Case */
    if (start > end)
        return NULL;

    /* Get the middle element and make it root */
    int mid = (start + end) / 2;
    struct TreeNode *root = neNode(arr[mid]);

    /* Recursively construct the left subtree and make it
       left child of root */
    root->left = ArrayToBST(arr, start, mid - 1);

    /* Recursively construct the right subtree and make it
       right child of root */
    root->right = ArrayToBST(arr, mid + 1, end);

    return root;
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */

struct TreeNode *sortedArrayToBST(int *nums, int numsSize)
{
    struct TreeNode *root = ArrayToBST(nums, 0, numsSize - 1);

    return root;
}