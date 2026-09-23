#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Arjun is the smartest boy";
    int n = s.length();
    int i = 0,j = 0,maxlen = 0;
    while(j<n){
        if(s[j] != ' ')j++;
        else {
            int len = j-i;
            if(len>maxlen){
                maxlen =len;
            }
            //jump to next word's space..
            i = j;// i and j are both at space..
            while(i<n && s[i]==' '){
                i++;
                j++;
            }
        }
    }
    cout<<maxlen<<endl;
}