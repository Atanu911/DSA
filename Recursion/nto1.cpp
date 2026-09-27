#include<iostream>
using namespace std;
void printNumber(int n){
    if(n==0) return; // base case
    cout<<n<<" ";//work
    printNumber(n-1);//call
}
int main(){
    int n;
    cin>>n;
    printNumber(5);

}