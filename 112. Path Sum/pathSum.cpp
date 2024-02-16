/*
    takeaway: minus the value of the current node from the target sum
              and pass it to the left and right child
*/


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr){
            return false;
        }

        if ((root->right == nullptr) && (root->left == nullptr)){
            return (root->val == targetSum);
        }

        return (hasPathSum(root->left, targetSum - root->val) ||
        (hasPathSum(root->right, targetSum - root->val)));
    }
};