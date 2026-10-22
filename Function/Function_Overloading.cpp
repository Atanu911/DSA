#include<iostream>
using namespace std;
//original method



// void fun(){
//     cout<<"Hii"<<endl;
// }
// void fun(int x){
//     cout<<"Good Morning"<<endl;
// }
// void fun(int x,int y){
//     cout<<"Kaisa ho Sushant"<<endl;
// }
// int main(){
//     fun();
//     fun(3);
//     fun(4,8);
     
// }
//
//By using default Parameters
void fun(){
    cout<<"Hii"<<endl;

}
//THIS WILL GIVE ERROR
void fun(int x = 7){
    cout<<"Good Morning";
}
void fun(int x,int y){
    cout<<"kaise ho Sushant"<<endl;
}
int main(){
    fun();
}