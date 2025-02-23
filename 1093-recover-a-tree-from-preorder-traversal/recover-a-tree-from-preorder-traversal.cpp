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
    TreeNode* recoverFromPreorder(string traversal) 
    {
        int n=traversal.length();
        int i=0;
        stack<TreeNode*> st;
        TreeNode*root=nullptr;
        while(i<n)
        {
            int depth=0;
            while(i<n && traversal[i]=='-')
            {
                depth++;
                i++;
            }
            string num="";
            while(i<n && isdigit(traversal[i]))
            {
                num=num+traversal[i];
                i++;
            }
            int number=stoi(num);
            TreeNode*nn=new TreeNode(number);
            while(st.size()>depth)
             st.pop();
            if(!st.empty())
            {
                if(!st.top()->left)
                  st.top()->left=nn;
                else
                  st.top()->right=nn;
            }
            else
            {
                root=nn;
            }
            st.push(nn);
            
        }
        return root;
    }
};