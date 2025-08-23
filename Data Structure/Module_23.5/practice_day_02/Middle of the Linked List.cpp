/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int size(ListNode* head)
    {
        int cnt=0;
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }


    ListNode* middleNode(ListNode* head) {
        ListNode* node = head;
        for(int i=1; i<= size(head)/2; i++)
        {
            node = node->next;
        }
        return node;
    }
};