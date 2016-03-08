class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int lDep = maxDepth(root -> left);
        int rDep = maxDepth(root -> right);
        return (max(lDep,rDep) + 1);
    }
};
