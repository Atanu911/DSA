#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;

    // if(n==1) cout<<"Monday";
    // else if(n==2) cout<<"Tuesday";
    // else if(n==2) cout<<"Wednusday";
    // else if (n=3) cout<<"Thursday";
    // else if (n=4) cout<<"Friday";
    // else if (n=5) cout<<"Saturday";
    // else if cout<<"Sunday";
    // else cout<<"Invalid day";
    switch(n){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednusday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
       default:
       cout<<"Invalid day";
       break;


    }
}