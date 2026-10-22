#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[2] =99; // Pass by value....
 }
 void change(vector<int> &v){
    v[2] = 99; // Pass by reference..
 }
int main(){
    vector<int> v = {4,3,8,2,9,7};
    change(v); //Don't modify the original value of vector
    cout<<v[2]<<endl;
}
//Vector is pass by value....
//Array is pass by reference...