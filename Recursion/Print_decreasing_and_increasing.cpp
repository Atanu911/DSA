#include<iostream>
using namespace std;
void DecreasingIncreasing(int n){
    if(n == 1) {
        cout<<1<< " ";
        return;
    }
    cout<<n<<" ";
    DecreasingIncreasing(n-1);
    cout<<n<< " ";
}
int main(){
    cout<<"Enter the integer :";
    int n;
    cin>>n;
    DecreasingIncreasing(n);
}