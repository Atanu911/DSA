#include<iostream>
using namespace std;
// void fun(int x,float y){
//     cout<<"Sahib";
// }
// void fun(float y,int x){
//     cout<<"Dhruv";
// }
// int main(){
//     fun(18,3.14);
// }



//This will work
void fun(int x, char y){
    cout<<"Sahib"<<endl;
}
void fun(char y,int x){
    cout<<"dhruv"<<endl;
}
int main(){
    fun(18,'j');
}


//This will not work
// void fun(int x,char y){
//     cout<<"Sahib"<<endl;

// }
// int main(){
//     fun(34,97);
// }

//But This will not work

void fun(int x,char y){
    cout<<"Sahib"<<endl;
}
void fun(char y,int x){
    cout<<"Dhrub"<<endl;
}
int main(){
    fun(34,97); // Yeah dono choose kar sakta h.....
}