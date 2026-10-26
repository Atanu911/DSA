#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main() {
    cout<<"Enter the string:";
    string s;
    getline(cin,s);
    int x =s.length();
    int additionOfNumbers = 0;
    for(int i = 0;i<x;i++){
        for(int j =1;j<=x-i;j++){
            string sub = s.substr(i,j);
            additionOfNumbers += stoi(sub);
        }
    }
    cout<<"sum of all substrings = "<<additionOfNumbers<<endl;
}