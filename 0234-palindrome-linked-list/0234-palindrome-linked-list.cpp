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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        //finding middle of the list

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //for odd length lists ,skip the middle one 
        if(fast)
        slow=slow->next;

        //reverse the 2nd half

        ListNode* prev=nullptr;
        ListNode* curr=slow;

        while(curr)
        {
            ListNode* nextTemp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextTemp;
        }
        //compare both halves

        ListNode* firstHalf=head;
        ListNode* secondHalf=prev;//head of rev list

        while(secondHalf)
        {
            if(firstHalf->val != secondHalf->val)
            return false;

            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
        }
        return true;
    }
};