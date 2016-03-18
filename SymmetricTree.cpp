class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        if(root->left == NULL && root->right == NULL)return true;
        if(root->left == NULL || root->right == NULL)return false;
        return isSymmetric(root->left,root->right);
    }
    bool isSymmetric(TreeNode* left, TreeNode* right)
    {
        if(left == NULL && right == NULL) return true;
        if(left == NULL || right == NULL) return false;
        if(left->val != right->val)return false;
        bool isLeft = isSymmetric(left->left, right->right);
        bool isRight = isSymmetric(left->right, right->left);
        return isLeft&&isRight;
    }
};
