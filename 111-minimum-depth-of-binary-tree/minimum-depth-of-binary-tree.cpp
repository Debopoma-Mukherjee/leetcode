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
    int preorder(TreeNode* root,int level)
    {
        int left=INT_MAX;
        int right=INT_MAX;
        if (root == nullptr)
         return 0;
        if(root->left==NULL && root->right==NULL)
          return level;
        if(root->left==NULL)
        {
            right=preorder(root->right,level+1);
            return right;
        }  
        if(root->right==NULL)
        {
            left=preorder(root->left,level+1);
            return left;
        }  
        else
        {
            right=preorder(root->right,level+1);
            left=preorder(root->left,level+1);
        }  
        return min(left,right);

    }
    int minDepth(TreeNode* root) 
    {
        int level=1;
        int ans=preorder(root,level);
        return ans;
    }
};