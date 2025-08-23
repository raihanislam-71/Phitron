class Solution {
public:
    int size(ListNode *head)
    {
        ListNode * tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode *fast = head;
        ListNode *last = head;
        for(int i=0; i<k-1; i++)
        {
            fast = fast->next;
        }
        int l = size(head)-k;
        for(int i=0; i<l; i++)
        {
            last = last->next;
        }

        swap(fast->val , last->val);

        return head;
    }
};