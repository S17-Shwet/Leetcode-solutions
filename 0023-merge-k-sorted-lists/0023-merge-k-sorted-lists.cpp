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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;

        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])
            {
                // lists[i] pointer
                pq.push({lists[i]->val,lists[i]});
            }
        }
        //create a dummy node to build the merged list
        ListNode* dummyNode=new ListNode(-1);
        ListNode* temp=dummyNode;

        while(!pq.empty())
        {
            //get the top min value from priority queue
            auto it=pq.top();
            pq.pop();

            //if node has second value
            // check if pointer i.e second has next element 
            if(it.second->next)
            {
                pq.push({it.second->next->val,it.second->next});
            }

            // set the next pointer of the curr node in the merged list
            temp->next = it.second;
            temp=temp->next;
        }
        return dummyNode->next;
    }
};

// Step-by-Step Logic (Simplified)

// Take only heads of all K sorted lists.

// Push them into a min-heap (priority queue) as (value, pointer) pairs.

// Find smallest node (min) among these heads.

// Pop it from the priority queue.

// Add it to the merged linked list.

// Check if this node has a next node in its original list.

// If yes, push that next node into the priority queue.

// Repeat until the priority queue becomes empty.