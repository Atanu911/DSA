#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
       this->val = val; 
       next = NULL;
    }
};
class MyStack{
    public:
    Node* head;
    Node* tail;
    int length;
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        Node* n = new Node(val);
        n->next = head;
        head = n;
        length++;

    }
    void pop(){
        if(length == 0){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
    }
    int get(){
        if(length == 0){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return head->val;

    }
    int size(){




    }
    void display(){// Top to Bottom
        Node* temp = head;
        while(temp ){
            cout<<temp<<"  ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.push(40);
    st.display();
}
