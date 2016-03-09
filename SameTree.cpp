class Solution
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL)return true;
        if(p && q)
        {
        if(p->val != q->val) return false;
        return (isSameTree(p->left,q->left))&&(isSameTree(q->right,p->right));
        }
        else
        return false;
    }
};
