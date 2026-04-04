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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          if (head == NULL) return NULL;
       
        int counter=0;
       
        int length = 0;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while (temp!=NULL){
            length++;
            temp=temp->next;
        }
   if ( n == length){
            return head->next;
          }else if ( length == 1){
            return NULL;
          }
        // after this above logic the temp will reach the NULLptr
        temp = head;
        while(temp != NULL){
            counter++;
            if(counter == length-n){
                prev = temp;
        temp = temp->next;
        prev->next = temp->next;
                delete temp;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};
