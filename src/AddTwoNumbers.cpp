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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        
        ListNode* l3 = NULL;
        ListNode* current = NULL;
        int a = 0;
        int b = 0;
        int c = 0;
        
        while(l1||l2) {
            
            a = 0;
            b = 0;
            
            if(l1) {
                a = l1->val;
                l1=l1->next;
            }
            
            if(l2) {
                b = l2->val;
                l2=l2->next;
            }
            
            int sum = a + b + c;
            c = sum/10;
            
            if(!l3) {
                l3 = new ListNode(sum%10);
                current = l3;
            } else {
                current->next = new ListNode(sum%10);
                current = current->next; 
            }
            
        }
        if(c>0) {
            current->next = new ListNode(c);
        }
        
        return l3;
        
    }
};