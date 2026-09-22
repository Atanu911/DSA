#include<iostream>
using namespace std;
// void swap(int a,int b){
//     int temp  = a;
//     a = b;
//     b = temp;
// }
// int main(){

//     int a = 5,b = 2;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
   
// }
//This will not work because of in main in it it
//has local variable but in void it has antoher variable in it... 

void swap(int& a,int& b){  //(int& is called Alias...)
    int temp + a;
    a = b;
    b = temp;
}
int main(){
    int a = 5,b = 2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}