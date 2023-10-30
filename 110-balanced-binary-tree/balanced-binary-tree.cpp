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
    int maxDepth(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        int ans = 1+ max(leftHeight, rightHeight);

        return ans;
    }
    bool isBalanced(TreeNode* root) {
        //  base case
        if(root==NULL)
            return true;

        // case 1
        int leftheight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        int diff = abs(leftheight - rightHeight);

        bool ans1 = (diff<=1);

        // recursion
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(ans1 && leftAns && rightAns)
            return true;
        else
            return false;
    }
};