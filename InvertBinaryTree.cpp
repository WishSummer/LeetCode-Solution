class Solution {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if(root == NULL)return NULL;
        TreeNode* temp;
        if(root->left || root->right)
        {
            if(root->left)
            {
                temp = root->right;
                root->right = invertTree(root->left);

                if(temp)
                {
                    root->left = invertTree(temp);
                }
                else
                {
                    root->left = NULL;
                }
            }
            else
            {
                root->left = invertTree(root->right);
                root->right = NULL;
            }
        }
        return root;
    }
};
