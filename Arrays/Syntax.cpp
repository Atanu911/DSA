#include<iostream>
#include<iterator>
using namespace std;
int main(){
    int marks [] = {74,96,91,57,62};
    cout<<size(marks)<<endl; //Works but in  old cpp.... 
    cout<<marks[2]<<endl;
    marks[2] = 23; //update v kr sakte hain...
    cout<<marks[2]<<endl;
    cout<<"Enter the input: ";
    cin>>marks[2]; //iput v le sakte hain....
    cout<<marks[2]<<endl;
    

}