class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr) {
            Node* temp = curr->next; // Store next node in temp variable
            curr->next = prev;       // Reverse pointer
            prev = curr;             // Advance prev to current node
            curr = temp;             // Advance curr to next node
        }

        return prev; // New head of the reversed list
    }
};