/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val=node->next->val;//copy val from next value
        node->next=node->next->next;//bypass the next node
// if(head->val == node->val)
// {
//     Node* temp=head->val;
//     head=head->next;
//     delete temp;
// }
    }
};