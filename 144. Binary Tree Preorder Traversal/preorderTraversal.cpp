#include<vector>
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
    void helper(vector<int> &ivec, TreeNode* root){
        if (root == nullptr){
            return;
        }
        ivec.push_back(root->val);
        helper(ivec, root->left);
        helper(ivec, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(ans, root);
        return ans;
    }
};