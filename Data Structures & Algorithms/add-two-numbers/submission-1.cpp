class Solution {
private:
    int carry = 0; 

    int sumfunc(int i, int j) {
        int sum = i + j + carry;
        carry = sum / 10; 
        return sum % 10;    
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        
        ListNode* head = new ListNode(sumfunc(curr1->val, curr2->val)); // carry updated here
        ListNode* temp = head;

        while (curr1->next != NULL || curr2->next != NULL) {
           int val1 = curr1->next ? (curr1 = curr1->next, curr1->val) : 0;
int val2 = curr2->next ? (curr2 = curr2->next, curr2->val) : 0;
temp->next = new ListNode(sumfunc(val1, val2));
temp = temp->next;
            
        }

        // if carry is left after last digits
        if (carry) {
            temp->next = new ListNode(carry);
        }

        return head;
    }
};