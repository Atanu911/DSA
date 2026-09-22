#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "Atanu";
    s.pop_back();
    s.push_back('k');
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
}