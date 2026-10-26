#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseSubstring(string &s, int start, int end){
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

string reverseWords(string s){
    int n = s.length();
    int i = 0;
    int j = 0;

    while(j <= n){
        // Check if j reached the end OR if current character is a space
        if(j == n || s[j] == ' '){
            reverseSubstring(s, i, j - 1);
            i = j + 1; // Move 'i' past the space to the start of the next word
        }
        j++; // Always increment j to avoid an infinite loop
    }
    return s;
}

int main(){
    string s = "the sky is blue";
    cout << "original: " << s << endl;
    cout << "Reversed: " << reverseWords(s) << endl;

    return 0;
}