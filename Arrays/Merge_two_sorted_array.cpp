#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[] = {10,20,40,70,80,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4;
    int n = sizeof(b)/4;
   int c[m+n]; 
    int i = 0, j = 0, k=0; 
    while(i<m && j<n){
        if(a[i] < b[j]){
            c[k] = a[i];// can use c[k++] = a[i++]....
            i++;
      
        }
        else{
            c[k] = b[j]; //can use c[k++] = b[j++].. 
           j++;
        
        }
        k++; //Redundant....
    }

        while(j<n){
            c[k++] = b[j++];
        }
  
      while(i<m){
        c[k++]= a[i++];
      }
        
    
    for(int idx= 0; idx<m+n;idx++){
        cout<<c[idx]<<" ";
    }
}