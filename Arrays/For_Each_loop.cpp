#include<iostram>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {2,3,4,5,6};
    for(int i= 0; i<=v.size();i++){
        cout<<v[i]<<" ";
    } //We can Print in any order....i.e can reverse the order of the array printing...
    //In this we can change the value of the array..
    for(int ele : v){
    cout<<ele<<" ";
    } //We can not print on any order....
    //We can't change the value of the array....   


    // Multiply even numbers by 2,square the odd numbers.....
    // for(int i=0;i<v.size();i++){
    //     if(v[i]%2 == 0) v[i] *=2;
    //     else v[i] *= v[i];
    // }
   for(int ele : v){
    if(ele%2 == 0) ele *= 2;
    else ele *= ele;
   }
   for( int ele : v) cout<<ele<<" ";
    }


}