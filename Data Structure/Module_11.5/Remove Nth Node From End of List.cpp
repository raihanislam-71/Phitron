class Solution {
public:
    ListNode* remove_head(ListNode *&head)
    {
        if(head == NULL) return head;
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return head;
    }
    ListNode * remove_position(ListNode *head,int n)
    {
        ListNode *tmp = head;
        for(int i=1; i<n; i++)
        {
            tmp = tmp->next;
        }
        ListNode *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        return head;
    }
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head == NULL) return head;
        if(n == size(head))
        {
            return remove_head(head);
        }
        else
        {
            return remove_position(head,size(head)-n);
        }

    }
};