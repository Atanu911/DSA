#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "Atanu Rana";
    cout<<s[1]<<endl;
    s[0] = 'Z';
    cout<<s<<endl;
    cout<<s.size()<<endl;
}