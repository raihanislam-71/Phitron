class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *newNode = node->next;
        node->next = node->next->next;
        delete newNode;
    }
};