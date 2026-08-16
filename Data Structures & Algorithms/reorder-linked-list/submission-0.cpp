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
    void reorderList(ListNode* head) {
        if (!head) {
            return;
        }

        ListNode* temp = head;
        ListNode* tempnext = temp->next;
        ListNode* newnext = nullptr;

        while (temp && temp->next) {
            ListNode* prev = temp;
            ListNode* last = temp->next;

            while (last->next) {
                prev = last;
                last = last->next;
            }

            newnext = last;

            prev->next = nullptr;

            tempnext = temp->next;

            temp->next = newnext;
            newnext->next = tempnext;

            temp = tempnext;
        }
    }
};