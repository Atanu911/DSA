/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        if(!headRef) return nullptr;
        Node* curr = headRef;
        // Travrese the list until end
        while(curr != NULL and curr->next != NULL){
            if(curr->data == curr->next->data){
                Node* duplicate = curr->next;
                
                //Bypass the duplicte node
                curr->next = duplicate->next;
                if(duplicate->next != NULL){
                    duplicate->next->prev = curr;
                }
                delete duplicate;
                
            }
            else{
                curr = curr->next;
            }
        }
        return headRef;
    }
};