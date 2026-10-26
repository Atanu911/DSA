#include<iostream>
using namespace std;
int main() {
    int arr [] ={5,3,4,2,1,9};
    int n = sizeof(arr)/4;
    int product = 1;
    for(int i = 0; i<=n-1;i++){
        product *= arr[i];
    }
    cout<<product;
}