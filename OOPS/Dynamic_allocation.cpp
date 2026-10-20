#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float average;
    Cricketer(string name,int runs,float average){
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
    Cricketer(){

    }

};
int main(){
    Cricketer c1("Virat Kohli",10000,77.6);
    Cricketer c2("Sachin Tendulkar",67000,55.4);
    Cricketer c3("Rohit Sharma",11000,49.4);

    Cricketer* ptr = &c1;
    ptr->average = 74.2;//(*ptr).average = 74.2...
    cout<<c1.average<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->runs<<endl;
    Cricketer* p = new Cricketer("ABD",10000,55.4);
}