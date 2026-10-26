#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float average;
    Cricketer(stirng name,int runs,float average){
        this->name = name;
        this->runs;
        this->average;

    }
    Cricketer(){

    }

};
int main() {
    Cricketer c1("Virat Kohli",10000,55.7);
    Cricketer c2("Sachin Tendulkar",18000,46.7);
    Cricketer c3("Rohit Sharma",18000,49.7);
    Cricketer* ptr = &c1;
    ptr->average = 74.2 //(*ptr).average = 74.2;
    cout<<c1.average<<endl;     
    cout<<(*ptr).name<<endl;
    cout<<(*ptr).runs<<endl;
    cout<<(*ptr).average<<endl; 
    cout<<x<<endl;
}