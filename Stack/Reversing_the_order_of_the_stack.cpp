#include<iostream>
#include<stack>
using namespace std;
void bottomToTop(stack <int> &st ,stack<int> &helper){
    
    while(st.size() != 0){
        helper.push(st.top());
        st.pop();
    }
}
void topToBottom(stack<int>&helper, stack<int>&helper2){

    while(helper.size()){
        helper2.push(helper.top());
        helper.pop();
    }
}
void reverseStack(stack<int>&st){

    stack<int>helper;
    stack<int>helper2;
    bottomToTop(st,helper);
    topToBottom(helper,helper2);
    while(helper2.size()!= 0){
        st.push(helper2.top());
        cout<<st.top()<<" ";
        helper2.pop();
    }
    
}

int main(){
    stack<int>st;
    st.push(10);st.push(20);st.push(30);st.push(40);st.push(50);
    reverseStack(st);
}