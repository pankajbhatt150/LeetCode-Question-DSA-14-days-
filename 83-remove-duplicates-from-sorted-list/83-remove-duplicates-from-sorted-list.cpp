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
    ListNode* deleteDuplicates(ListNode* head) {
       if (head == nullptr)
            return head;
        ListNode* current = head;
        while (current->next != nullptr) {
            ListNode* temp = current->next;
            while(current->val == temp->val) {
                temp = temp->next;
                if (temp == nullptr)
                    break;
            }
            current->next = temp;
            current = current->next;
            if (current == nullptr)
                break;
        }
        return head;
    }
    
        
    
};