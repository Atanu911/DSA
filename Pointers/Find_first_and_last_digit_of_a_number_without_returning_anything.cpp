#include<iostream>
using namespace std;
int CountDigits(int n,int* ptr){
    int count = 0;
    if(n == 0) count=1;
    while(n != 00){
        count++;
        n /=10;
    }
    *ptr = count;


}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int c = 0;
    CountDigits(n,&c);
    cout<<c<<endl;
    
}