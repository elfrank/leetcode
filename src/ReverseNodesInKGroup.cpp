/**
* Given a linked list, reverse the nodes of a linked list k at a time and
* return its modified list.
* 
* If the number of nodes is not a multiple of k then left-out nodes in the 
* end should remain as it is.
*
* You may not alter the values in the nodes, only nodes itself may be changed.
*
* Only constant memory is allowed.
*
* For example,
* Given this linked list: 1->2->3->4->5
*
* For k = 2, you should return: 2->1->4->3->5
*
* For k = 3, you should return: 3->2->1->4->5
*/


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(0) {}
  };
 
class Solution {
public:
    
    ListNode* reverseSubList(ListNode *current, int size, int k) {
		
		if (size < k) {
			return current;
		}

		ListNode *tail = current;
		ListNode *previous = 0;
		ListNode *next = 0;
		
		for (int i = 0; i < k; ++i) {
			if(current) {
				next = current->next;
				current->next = previous;
				previous = current;
			}
			current = next;
		}

		tail->next = reverseSubList(current, size-k, k);

		return previous;
	}

    ListNode *reverseKGroup(ListNode *head, int k) {
        
		if(!head || k < 2) {
			return head;
		}
		
		ListNode* current = head;
		int size = 0;
		while(current) {
			current = current->next;
			++size;
		}

		return reverseSubList(head, size, k);
		
    }
};

/*int main() {
	
	Solution *pSolution = new Solution();

	ListNode* head = new ListNode(0);
	ListNode* n1 = new ListNode(1);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(3);
	ListNode* n4 = new ListNode(4);
	ListNode* n5 = new ListNode(5);
	ListNode* n6 = new ListNode(6);
	ListNode* n7 = new ListNode(7);
	ListNode* n8 = new ListNode(8);

	head->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	
	ListNode* sol = pSolution->reverseKGroup(head,9);
}*/