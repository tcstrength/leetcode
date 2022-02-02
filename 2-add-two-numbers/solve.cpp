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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* tail = head;
        int carry = 0;
        int sum = 0;
        int digit = 0;
        int num1 = 0;
        int num2 = 0;
        
        while (l1 || l2 || carry != 0) {
            num1 = 0;
            num2 = 0;
            
            if (l1) {
                num1 = l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                num2 = l2->val;
                l2 = l2->next;
            }
            
            sum = num1 + num2 + carry;
            carry = sum / 10;
            digit = sum % 10;
            
            cout << digit << " ";
            
            ListNode* temp = new ListNode(digit);
            tail->next = temp;
            tail = temp;
        }
        
        cout << endl;
        
        return head->next;
    }
};
