#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter length:";
    cin>>length;
    int breadth;
    
    cout<<"Enter breadth:";
    cin>>breadth;
    int area = length * breadth;
    cout<<"Area is "<<area<<endl;

    int parameter = 2 * (length + breadth);
    cout<<"Parameter is "<<parameter<<endl;
    if(area>parameter) cout<<"Area is Greater";
    else if(parameter>area) cout<<"Parameter is greater";
    else cout<<"Parameter and area is same";

}