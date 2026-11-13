#include<iostream>
using namespace std;
class Node{ // User defined data type 
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        prev = next = NULL;
    }
};
class myDoublyLinkedList{
    private:
    Node* head;
    Node* tail;
    int length;
    public:
    myDoublyLinekedList(){
       head = tail = NULL;
       length = 0;
    }
    void insertAtTail(int val){
       Node* n = new Node(val);
       if(length == 0) head = tail = n;
       else{
        tail->next = n;
        n->prev = tail;
       }
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            n->next = head;
            head->prev = n;
            head = n;
        }
        length++;
    }
    void removeAtTail(int val){
        if(length == 0){
            cout<<"List is Empty"<<endl;
            return;
        }
        tail = tail->prev;
        tail->next = NULL;
        length--;
    }
    
    void removeAtHead(){
        if(length == 0){
            cout<<"List is Empty!"<<endl;
            return;
        }
       head = head->next;
       head->prev = NULL;
       length--;
    }
    void dispaly(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }
    void displayReverse(){
        Node* temp = tail;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
    }
    void remove(int idx){
        length--;
    }
void insertAtAnyIndex(int idx,int val ){
    Node* n = new Node(val);
    if(idx == 0){
        n->prev =NULL;
        n->next = head;
        if(head != NULL){
            head->prev =n;
        }
        head = n;
    }
    else{
        Node* tmep = head;
        for(int i = 0;i<idx-1;i++){
            temp = temp->next;

        }
        n->next = temp->next;
        n->prev = temp;
        temp->next = n;
        if(temp->next != NULL){

        
        n->next->prev =n;
        }
        temp->next = n;
    }
    length++;
    
}
};
int main(){
    myDoublyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    lis.insertAtTail(30);
    list.insertAtHead(40);
    list.display();
}
