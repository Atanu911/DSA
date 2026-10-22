#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :";
    cin>>s;
    int n = s.size();
    if(n%2 != 0){
        cout<<"Enter the new string :";
        return 0;
    }
    int i = 0;
    int j = n/2-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<"Modified string :"<<s;
    return 0;
} 