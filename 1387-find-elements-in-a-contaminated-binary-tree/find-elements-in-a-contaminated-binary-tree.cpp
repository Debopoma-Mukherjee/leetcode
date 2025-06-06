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
class FindElements {
public:
    unordered_set<int> recoveredNodes;
    void recoverBinaryTree(TreeNode* root,int val)
    {
        if(root==NULL)
           return;
        recoveredNodes.insert(val);
        recoverBinaryTree(root->left,2*val+1);
        recoverBinaryTree(root->right,2*val+2);

    }
    FindElements(TreeNode* root) {
        recoveredNodes.insert(0);
        recoverBinaryTree(root->left,1);
        recoverBinaryTree(root->right,2);

    }
    
    bool find(int target) {
        if(recoveredNodes.find(target)!=recoveredNodes.end())
           return true;
        return false;

    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */