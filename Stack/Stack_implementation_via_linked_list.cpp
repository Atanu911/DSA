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
    private:
    Node* head;
    Node* tail;
    int length;
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){

    }
    void pop(){

    }
    int get(){

    }
    int size(){

    }
};
int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.push(40);
    cout<<st.size()<<endl;
}
