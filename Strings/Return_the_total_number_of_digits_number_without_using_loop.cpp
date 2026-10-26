#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer:";
    cin>>n;
    string s = to_string(abs(n)); 
    cout<<s.length()<<endl;
}