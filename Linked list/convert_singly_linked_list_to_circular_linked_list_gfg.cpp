/* Linked List Node Structure
class Node {
    public:
        int data;
        Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        if(head == NULL) return true;
        Node* temp = head->next;
        while(temp != NULL and temp != head){
            temp = temp->next;
        }
        return (temp == head);
    }
};