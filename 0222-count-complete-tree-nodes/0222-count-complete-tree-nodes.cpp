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
    int countNodes(TreeNode* root) {
        if(!root)
        return 0;

        int leftdepth=getLeftdepth(root);
        int rightdepth=getRightdepth(root);

        if(leftdepth==rightdepth)
        {
            return(1<<leftdepth)-1;
        }
        
        //if not complete tree
        // count left and right by passing left and right to get helper functions 1 for root itself
        return 1+countNodes(root->left) + countNodes(root->right);
    }

    private:

    int getLeftdepth(TreeNode* node)
    {
        int depth=0;
        while(node)
        {
            ++depth;
            node=node->left;
        }
        return depth;
    }
    int getRightdepth(TreeNode* node)
    {
        int depth=0;
        while(node)
        {
            ++depth;
            node=node->right;
        }
        return depth;
    }
};