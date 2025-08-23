class Solution {
public:

    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        ListNode *tmp = head;

        while(tmp->val == val){
            tmp = tmp->next;
            if(tmp == NULL) return tmp;
        }
        head = tmp;

        while(tmp->next != NULL)
        {
            if(tmp->next->val == val)
            {
                ListNode *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
                continue;
            }
            tmp = tmp->next;
        }
        return head;
    }
};