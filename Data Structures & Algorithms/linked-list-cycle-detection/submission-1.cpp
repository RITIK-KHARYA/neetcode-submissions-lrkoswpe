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


// in this question we will use the concept of tortorise


class Solution {
public:
    bool hasCycle(ListNode* head) {
         ListNode* fast = head;
        ListNode* slow = head;
        while( fast != NULL && slow != NULL && fast->next != NULL){
         
           slow = slow->next;
             fast = fast->next->next;
            if(fast == slow){
                return true; 
            }   
        }
        return false;
    }
};
