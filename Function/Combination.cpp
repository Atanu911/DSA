#include<iostream>
using namespace std;


// int main(){
// int n , r;
// cout<<"Enter the n and r :";
// cin>>n>>r;

// int nFact = 1;
// for(int i=1;i<=n;i++){
//     nFact *= i;
// }

// int rFact = 1;
// for(int i=1;i<=n;i++){
//     rFact *= i;
// }

// int nrFact = 1;
// for(int i=1;i<=n-r;i++){
//     nrFact *= i;
// }
// int ncr = nFact/(rFact*nrFact);
// cout<<ncr;
// }

//Method 2 using function
int fact(int x){
    int Fact = 1;
    for(int i=1;i<=x;i++){
        Fact *= i;
    }
    return Fact;
}

int main(){
    int n , r;
    cout<<"Enter the n and r :";
    cin>>n>>r;

    int ncr = fact(n) / (fact(r)*fact(n-r));
    cout<<ncr<<endl;
}