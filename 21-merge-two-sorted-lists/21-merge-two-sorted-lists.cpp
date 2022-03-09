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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL)
        return list2;
    else if(list2==NULL)
        return list1;
    
    ListNode *dummynode = new ListNode(-1);//making a node whose next will carry the head address of list
    ListNode *dummyhead = dummynode;//this is a pointer which will traverse on the new list
    
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->val <= list2->val)
        {
            dummyhead->next = list1;//if this run then first time the head address of new list will be in next of dummynode
            list1 = list1->next;
        }
        else
        {
            dummyhead->next = list2;
            list2 = list2->next;
        }
        dummyhead=dummyhead->next;
    }
    if(list1!=NULL)
        dummyhead->next=list1;//if list one have more nodes left then just connect head with new list
    else
        dummyhead->next=list2;//if list 2nd have more nodes left then just connect head with new list
    
       return dummynode->next;  
    }
};