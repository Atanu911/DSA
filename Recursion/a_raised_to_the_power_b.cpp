#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int ans = a* power(a,b-1);
    return ans;

}
int main(){
    cout<<"Enter the number and its power: ";
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}