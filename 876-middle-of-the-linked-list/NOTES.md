ListNode* middleNode(ListNode* head){
int n=0;
ListNode *fast=head;
ListNode *slow=head;
while(fast!=NULL &&fast->next=next)
{
slow=slow->next;
fast=fast->next->next;
}
return slow;
}
};