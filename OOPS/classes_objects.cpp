#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
class Student{// user defined data type...
    public:
    string name;
    int rno;
    float cgpa;
};
int main(){
    Student x; // object or variable.
    x.name = "Sumit";
    x.rno = 36;
    x.cgpa = 8.7;
    // Student number 2..
    Student y;
    y.name = "Atanu";
    y.rno = 81;
    y.cgpa = 7.6;
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
}

