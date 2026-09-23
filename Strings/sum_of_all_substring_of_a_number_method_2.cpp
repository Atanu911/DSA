#include<iostream>
#include<string>
using namespace std;
long long sumOfSubstrings(string s){
    long long total_sum =0;
    long long current_sum = 0;
    for (int i = 0;i<s.length();i++){
        int digit  = s[i]-'0';
        current_sum = current_sum *10 +digit *(i+1);
        total_sum += current_sum;

    }
    return total_sum;
}
int main() {
    string s = "926";
    cout<<"Sum of substrings:"<<sumOfSubstrings(s)<<endl;
    return 0;
}