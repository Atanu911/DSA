#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s = "My father name is Rabindranath Rana";
    int n = s.size();
    for(int i = 0;i<n;i++){
        if(s[i]%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}