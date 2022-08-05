/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
Node* copyRandomList(Node* head)
{
    if (!head)
        return head;
    Node* temp = head;
    while (temp) {
        Node* newnode = new Node(temp->val);
        newnode->next = temp->next;
        temp->next = newnode;
        temp = temp->next->next;
    }
    temp = head->next;
    Node* t = head;
    while (temp) {
        if (t->random)
            temp->random = t->random->next;
        else
            temp->random = t->random;

        if (!temp->next) {
            break;
        }
        t = t->next->next;
        temp = temp->next->next;
    }
    Node* head2 = head->next;
    temp = head->next;
    t = head;
    while (temp->next) {
        t->next = t->next->next;
        temp->next = temp->next->next;
        temp = temp->next;
        t = t->next;
    }
    t->next = NULL;
    return head2;
}
};