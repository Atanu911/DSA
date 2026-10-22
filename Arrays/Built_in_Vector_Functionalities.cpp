#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v ={2,5,3,1};
    // std::sort(v.begin(),v.end()); //sorting will be happen in this case....
     // reverse(v.begin(),v.end()); // All the items will be reverse...
    for(int ele : v) cout<<ele<<" ";
    sort(v.begin()+1,v.end()-1); //Array will from 5,3....
    for(int ele : v) cout<<ele<<" ";
}