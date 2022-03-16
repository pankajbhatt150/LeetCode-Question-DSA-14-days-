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
    ListNode* removeElements(ListNode* head, int val) {
    if(head == NULL)
            return head;
        
        while(head != NULL && head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }
        
        if(head == NULL)
            return head;
        
        ListNode *temp = head;
        
        while(temp->next != NULL)
        {
            while(temp->next != NULL && temp->next->val == val)
            {
                ListNode *next = temp->next;
                temp->next = temp->next->next;
                delete next;
            }
            
            if(temp->next == NULL)
                break;
            
            temp = temp->next;
        }
        
        return head;
    }
};