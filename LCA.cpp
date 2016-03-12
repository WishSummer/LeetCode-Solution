class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(p == NULL || q == NULL)return NULL;
       vector<TreeNode*>traceP;
       vector<TreeNode*>traceQ;
       TreeNode* rootCopy = root;
       while(true)
       {
           if(root->val == p->val)
           {
               traceP.push_back(root);
               break;
           }
           else
           {
               traceP.push_back(root);
               if(p->val < root->val)
               {
                   root = root->left;
               }
               else
               {
                   root = root->right;
               }
           }
       }

        while(true)
       {
           if(rootCopy->val == q->val)
           {
               traceQ.push_back(rootCopy);
               break;
           }
           else
           {
               traceQ.push_back(rootCopy);
               if(q->val < rootCopy->val)
               {
                   rootCopy = rootCopy->left;
               }
               else
               {
                   rootCopy = rootCopy->right;
               }
           }
       }

       for(int i = 0; i < min(traceP.size(),traceQ.size()); i++)
       {
           if(traceP[i] != traceQ[i])
           {
               return traceP[i - 1];
           }
           if(i == min(traceP.size(),traceQ.size()) - 1)
           {
               return traceP[i];
           }
       }
    }
};
