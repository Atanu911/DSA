#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
class MyVector{//User Defined Data Sturcture
    private:
    int length;
    int* arr;
    int cap;


    public:
    MyVector(int capacity,int default_value){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i = 0;i<capacity;i++){
            arr[i]= default_value; 
        }
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        length--;
    }
    void push_back(int val){
        if(length == cap){
          int temp[2*cap];
          for(int i = 0;i<length:i++){
            temp[i]= arr[i];
          }
          delete arr;
          arr=temp;

        }
        arr[length++]=val;
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
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.print();
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.print();
}
