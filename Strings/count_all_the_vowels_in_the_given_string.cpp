#include<iostream>
#include<string>
#include<algorithm>
#include <cctype>
using namespace std;
int main() {
    string s = "Atanu is a good boy.";
    int n = s.size();
    int count= 0;
    for(int i = 0; i < n; i++) {
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';

        if(ch =='a') count++;
        else if(ch=='e') count++;
        else if(ch=='i') count++;
        else if(ch=='o')count++;
        else if(ch=='u')count++;
    }
    
    cout<<count<<endl;
}