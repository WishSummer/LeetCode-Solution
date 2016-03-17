class Solution {
public:
    int UNB = -99;
    bool isBalanced(TreeNode* root) {
         int result = judgeBalance(root);
         if(result != UNB)return true;
         else return false;
    }

    int judgeBalance(TreeNode* node)
    {
        if(node == NULL)return 0;
        int l = judgeBalance(node->left);
        int r = judgeBalance(node->right);
        if(l == UNB || r == UNB || abs(l - r) > 1) return UNB;
        return 1 + (l > r? l:r);
    }
};
