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
     ListNode* fast, *slow;
	fast = head;
	slow = head;
// Move fast pointer till n iterations
	while(n){
		fast = fast->next; 
		n--;   }
	if(!fast)
		return head->next;
		
 /* increment both fast and slow pointers together untill fast reaches the end */ 
	while( fast -> next != NULL) {
		fast = fast -> next;
		slow = slow -> next;
	}
	slow -> next = slow -> next -> next;
	return head;   
        
    }
};