#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
class MyVector{//User Defined Data Sturcture
    public:
    int length;
    int* arr;
    int cap;

    MyVector(int capacity,int default_value){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i = 0;i<capacity;i++){
            arr[i]= default_value; 
        }
    }
    MyVector(){

    }
    void pop_back(){
        length--;
    }
    void print(){
        for(int i = 0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
     MyVector v(-5,1);//vector<int> v(5,-1)
     v.print();
     int* arr = new int[5];
     arr[0] = 1;arr[1] = 20;
     int b[] = {21,22,46};
     arr = b;
     cout<<arr[0]<<endl;
}
