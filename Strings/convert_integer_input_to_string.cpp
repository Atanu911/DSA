#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    
    string s="";
    while(n != 0){
        int lastDigit = n%10;
        char ch = lastDigit+48;
        s.push_back(ch);
        n = n/10;
    }
    int i = 0,j = s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
}