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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base case
        if(head==NULL)return head;
        
        
        //if k is not a divisor of length of LL
        //suppose our LL is [1,2,3,4,5] and k=3
        //then we have to reverse only first 3 nodes
        //so the foolowing code will help to not to reverse the last 2 nodes.
        int count = 0;
        ListNode* curr = head;
        while(curr && count<k){
            count++;
            curr = curr->next;
        }
        if(count<k)
            return head;
        //step 1 -> reversing first k nodes
        curr = head;
        ListNode * prev = NULL;
        ListNode * frwd = NULL;
        count=0;
        while( curr!=NULL && count < k){
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
            count++;
        }
        // step 2 -> recursion will solve the rest LL
        head->next = reverseKGroup(frwd,k);
        return prev;
    }
};


