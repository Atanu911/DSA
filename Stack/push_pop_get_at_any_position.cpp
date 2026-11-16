#include<iostream>
#include<stack>
using namespace std;

void printTopToBottom(stack<int>&st){
    stack<int>helper;
    while(st.size() != 0){
        cout<<st.top()<<" ";
        helper.push(st.top());
        st.pop();
    }

    //put back element form helper to st....
    while(st.size() != 0){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}

void printBottomToTop(stack<int>&st){
    stack<int>helper;
    while(st.size() != 0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() != 0){
        cout<<helper.top()<< " ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}

void push(int idx, int val, stack<int>& st){
    stack<int>helper;
    while(st.size()> idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()!= 0){
        st.push(helper.top());
        helper.pop();
    }
}
void pop(int idx,stack<int> &st){
    stack<int>helper;
    // Move elements from st to helper untill we reach  the target index..
    while(st.size()> idx+1){
        helper.push(st.top());
        st.pop();
    }
    st.pop();
    while(helper.size() != 0){
        st.push(helper.top());
        helper.pop();
    }
}
int get(int idx,stack<int>&st){
    stack<int> helper;
    while(st.size()>idx+1){
        helper.push(st.top());
        st.pop();
    }
    int val = st.top();
    while(helper.size() != 0){
        st.push(helper.top());
        helper.pop();
    }
    return val;
}

int main(){
    stack<int>st;
    st.push(10);st.push(20);st.push(30);st.push(40);st.push(50);
    // printing bottom to top...
    printBottomToTop(st);
    push(2,99,st);
    printBottomToTop(st);
}
