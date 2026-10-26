#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class MyLinkedList{// User Defined Data Type
    public:
    Node*head;
    Node*tail;
    int length;
    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

    //insertion at Head...
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
        n->next = head;
        head = n;
        }
        length++;
    }

    //insertion at tail...
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }

    //removing at head..
    void removeAtHead(){
        if(length ==0 ){
            cout<<"list is empty!"<<endl;
            return;
        }
        Node* nodeToBeDeleted = head;
        head= head->next;
        delete nodeToBeDeleted;
        length--;
    }

    // insert at index.
    void insertAtIndex(int idx,int val){
        if(idx<0 or idx>length){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if(idx == 0){ //insert at head..
            insertAtHead(val);
            return;
        }
        if(idx ==length){ //insert at tail
            insertAtTail(val);
            return;

        }
        // Actual code...
        Node* n = new Node(val);
        Node* temp = head;
        for(int i = 0;i<=idx-1;i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }

    //get at index...
    int get(int idx){
        if(idx<0 or idx>length){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        temp = head;
        for(int i = 0;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }

    //remove at index..
   void removeAtIndex(int idx){
        if(idx<0 or idx>=length){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if(idx=0){
            removeAtHead(val);
            return;
        }
        Node* temp = head;
        for(int i = 1;i<=idx-1;i++){
            temp = temp->next;
        }
        Node* nodeToBeDeleted = temp->next;
        temp->next = temp->next->next;
        if(idx == length-1) tail = temp;
        delete nodeToBeDeleted;
        length--;
        return;
    }

};
int main(){
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.removeAtHead();
    list.display(); 
    list.insertAtHead(40);
    list.display();
    cout<<list.length<<endl;
    
}
