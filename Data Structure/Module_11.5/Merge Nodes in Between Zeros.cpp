class Solution {
public:
   
    ListNode* mergeNodes(ListNode* head) {
        ListNode *tmp = head->next;
        ListNode *result = NULL;
        ListNode *tail = NULL;
        int sum = 0;
        while(tmp != NULL)
        {
            if(tmp->val != 0)
            {
                sum += tmp->val;
            }
            else
            {
                ListNode *newNode = new ListNode(sum);
                if(result == NULL)
                {
                    result = newNode;
                    tail = newNode;
                }
                else
                {
                    tail->next = newNode;
                    tail = newNode;
                }
                sum = 0;
            }
            tmp = tmp->next;
        }
        return result;
    }
};