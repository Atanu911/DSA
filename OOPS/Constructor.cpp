#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
    Student(){ // Default Constructor...

    }
    
    //Constructor overloading..

  Student(string n,int r,float c){//Parameterised Constructor..
    name = n;
    rno = r;
    cgpa = c;
  }
  Student(int r,float c,string n){ //Parameterised Constructor...
  rno = r;
  cgpa = c;
  name = n;
} 

Student(string n,int r){
  name = n;
  rno = r;
}
  
};

int main() {
    Student x("Sumit",39,8.7);
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
    
    Student y(1049,9.75,"Atanu");
    Student z("Ikram",42);
    Student alpha;
    
} 