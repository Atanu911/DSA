#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
    Student(string n,float c,int r){
        rno = r;
        name = n;
        cgpa = c;

    }
    Student(){

    }
    void print(){
        cout<<name<< " "<< rno<< " "<<cgpa<<endl;
    }
};
void change(Student& s){
    s.name = "Atanu";
}
int main(){
    Student x("Sumit",8.7,7.39);
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
    change(x);
    x.print(); 
   
}