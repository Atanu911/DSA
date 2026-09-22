#include<iostream>
using namespace std;
void sumit(){
    cout<<"Hii Sumit"<<endl;
}
void arjun(){
    cout<<"Hi Arjun"<<endl;
    sumit();
}
void anu(){
    cout<<"Hii Anu"<<endl;
     arjun();
}

int main(){
 anu();
 

}