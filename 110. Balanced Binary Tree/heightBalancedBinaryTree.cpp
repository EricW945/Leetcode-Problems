/*
    A height-balanced binary tree is a binary tree in which the depth
    of the two subtrees of every node never differs by more than one.
*/


#include <algorithm>
using namespace std;

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
    int height(TreeNode* root){
        if (root == nullptr){
            return 0;
        }

        return (1 + max(height(root->left), height(root->right)));
    }

    bool isBalanced(TreeNode* root) {
        int leftH, rightH;

        if (root == nullptr){
            return true;
        }

        leftH = height(root->left);
        rightH = height(root->right);

        if (abs(leftH - rightH) <= 1 && isBalanced(root->left) &&
        isBalanced(root->right)){
            return true;
        }

        return false;
    }
};