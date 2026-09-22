#include<iostream>
using namespace std;
 
void fun(int n){
    cout<<n<<endl;
    if(n>20) return;//only in case of void function we can write return;
    //otherwise we always return something like (return a*b)
    cout<<n*n<<endl;
}
int main(){
    fun(27);
}