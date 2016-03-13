class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode *root = head;
        while(head->next != NULL)
        {
            if(head->val == head->next->val)
            {
                if(head->next->next != NULL)
                {
                    head->next = head->next->next;
                }
                else
                {
                    head->next = NULL;
                    break;
                }
            }
            else
            {
                head = head->next;
            }
        }
        return root;
    }
};
