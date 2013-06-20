/**
* http://leetcode.com/onlinejudge#question_24
*
* Given a linked list, swap every two adjacent nodes and return its head.
*
* For example,
* Given 1->2->3->4, you should return the list as 2->1->4->3.
*
* Your algorithm should use only constant space. You may not modify the values
* in the list, only nodes itself can be changed.
*/


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(0) {}
  };
 
 
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        
        if (!head || !head->next) {
            return head;
        }   
        
        ListNode *current = head;
        while(current && current->next) {
            int tmp = current->val;
            current->val = current->next->val;
            current->next->val = tmp;
            current = current->next->next;
        }
        
        return head;
    }
};