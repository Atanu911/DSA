#include<iostream>
#include<stack>
using namespace std;
void printTopToBottom(stack<int>st){
    stack<int>helper;
    while(st.size()!= 0){
        helper.push(st.top());
        st.pop();

    }
    cout<<"Top to Bottom ";
    while(helper.size() != 0){
        int curr = helper.top();
        cout<<curr<<" ";
        st.push(curr);
        helper.pop();
    }
    cout<<endl;

}
int main(){
    stack<int>st;

    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);

    printTopToBottom(st);

}