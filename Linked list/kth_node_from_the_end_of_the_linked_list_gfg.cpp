/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* slow = head;
        Node* fast = head;
        for(int i = 1;i<=k;i++){
            if(fast == NULL) return -1;
            fast = fast->next;
        }
        while(fast!= NULL){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->data;
        
        // int length = 0;
        // Node * temp = head;
        // while(temp != NULL){
        //     temp = temp->next;
        //     length++;
        // }
        //   temp = head;
        // if(k>length) return -1;
        // else{
        //     for(int i =0;i<length-k;i++){
        //      temp = temp->next;
        //     }
        // }
        //     return temp->data;
        
           
    }
};