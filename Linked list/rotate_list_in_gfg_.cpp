/* Linked List Node Structure
class Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head == NULL or head->next == NULL) return head;
        
        int len = 1;
        Node* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
            len++;
        }
        
        k = k % len;
        if(k==0)return head;
        
        Node* temp = head;
        for(int i = 1;i<k;i++){
            temp = temp->next;
        }
        
        Node* newHead = temp->next;
        temp->next = NULL;
        tail->next = head;
        return newHead;
        
        
    }
};