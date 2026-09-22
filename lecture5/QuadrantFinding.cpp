#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter the x and y codinate:";
    cin>>x>>y;
    if(x>0 && y>0) cout<<"First Quadrant";
    else if(x<0 && y>0) cout<<"Second Quadrant";
    else if(x<0 && y<0) cout<<"Third Quadrant";
    else if(x>0 && y<0) cout<<"Fourth Quadrant";
    else if(x==0 && y==0) cout<<"centre";
    else if(x==0) cout<<"y axis";
    else if(y==0) cout<<"z asis";
}