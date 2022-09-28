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
     	//check if head is NLL or head Next is NULL
		if(head==NULL || (head->next==NULL)){
			return NULL;
		}
    
    //start first and second from the head
    ListNode*first=head;
    ListNode*second=head;

    //make first forward n times
    while(n--){
        first=first->next;
    }
    
    //edge condtion
    //if first is null means n is eqaul to length of linkedlist
    if(first==NULL){
        head=head->next;
        return head;
    }
    
    //make forward first and second at the same time
    while(first->next!=NULL && first!=NULL){
        first=first->next;
        second=second->next;
    }
    
    //point second pointer to next next of send pointer
    second->next=second->next->next;
    
    return head;   
    }
};