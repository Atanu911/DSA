#include<iostream>
using namespace std;
void deeksha(int n ){
    if(n==0) return;
    cout<<"Deeksha"<<endl;
    deeksha(n-1);// recursion basically.

}
int main(){
    deeksha(3);
}