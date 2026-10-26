#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2 == 0) cout<<(char)(i+64)<<" ";
            else cout<<(char)(i+96)<<" ";
        }
        cout<<endl;
    }
        //Method 2
        for(int i=n;i>=1;i++){
            for(int j=1;j<=n;j++){
                cout<<j<<" ";

            }
            cout<<endl;
        }
        //Method 3
        int a =n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=a;j++){
                cout<<"* ";

            }
            a--;

        }
        cout<<endl;
    
}