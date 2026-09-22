#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s ="AtanuRana";
    cout<<s.substr(0,3)<<endl; // 0 se start ,3 length ka..
    cout<<s.substr(1,3)<<endl;//1 se start, 3 length ka..
    cout<<s.substr(2)<<endl;// 2 to end
}