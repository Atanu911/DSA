class Solution{
    public:
    Node* reverse(Node* head){
        
    }
    Node* reverse(Node* head){
        Node* curr = head;
        Node* back = NULL;
        while(curr != NULL){
            Node* fwd  =curr->next;
            curr->next =prev;
            curr->prev =fwd;

            prev =curr;
            curr= fwd;
        }
        return back;
    }

};