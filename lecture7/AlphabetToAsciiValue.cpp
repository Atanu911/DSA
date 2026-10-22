#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character:";
    for(char ch='A';ch<='Z';ch++){
        cout<<ch<<"="<<(int)ch<<endl;
    }
}