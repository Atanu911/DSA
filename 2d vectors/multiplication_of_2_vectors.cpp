#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> multiplication_matrics(vector<vector<int>> &a,vector<vector<int>>&b){
    int r = a.size();
    int c1 = a[0].size();
    int c2 = b[0].size();
    vector<vector<int>> res(r,vector<int>(c2,0));
    for(int i = 0;i<r;i++){
        for(int j= 0;j<c2;j++){
            for(int k=0;k<c1;k++){
                res[i][j] += a[k][i]*b[k][j];
            }
        }
    }
    return res;
   
}
int main(){
    cout<<"Enter the rows and columns: ";
    int r,c;
    cin>> r>>c;
vector<vector<int>> x(r,vector<int>(c));
cout<<"Enter the elements :";
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>x[i][j];
    }
}
cout<<"Enter the rows and cols:";
int r1,c1;
cin>>r1>>c1;
vector<vector<int>> y(r1,vector<int>(c1));
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>y[i][j];
    }
}
multiplication_matrics(x,y);
vector<vector<int>> ans=multiplication_matrics(x,y);
cout<<"The matrics is...";
for(int i = 0;i<ans.size();i++){
    for(int j=0;j<ans[0].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
