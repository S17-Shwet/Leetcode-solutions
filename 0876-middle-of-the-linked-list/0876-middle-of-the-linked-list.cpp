/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
//  ✅ Approach 1: Count Length + Traverse Again

// Traverse the list once to count nodes (n).

// Middle = n/2 (0-indexed).

// Traverse again n/2 steps and return that node.
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int length=0;
        
//         ListNode* temp=head;

//         while(temp)
//         {
//             length++;
//             temp=temp->next;
//         }
//         int mid=length/2;
//         temp=head;

//         for(int i=0;i<mid;i++)
//         {
//             temp=temp->next;
//         }
//         return temp;//head return at the end so head starts from the mid
//     }
// };

// ✅ Approach 2: Store Nodes in Array / Vector

// Traverse the list and store pointers in an array/vector.

// The middle is at index size/2.

// Return that node.
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        vector<ListNode*> nodes;
        ListNode* temp=head;

        while(temp)
        {
            nodes.push_back(temp);
            temp=temp->next;
        }
        return nodes[nodes.size()/2];
    }
};
