#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    private:
    int runs;
    string name;
    float average;
public:

Cricketer( string name,int runs,float average){
    (*this).name = name;
    this->runs = runs;
    this->average = average;
}
void print(){
    cout<<name<<endl;
    cout<<runs<<endl;
    cout<<average<<endl;
}
int getRuns(){// getter.. 
    return runs;
}
void  setRuns(int runs){
    this->runs = runs;
}
int main(){
    Cricketer c("Virat Kohli",15000,58);
    cout<<c.getRuns()<<endl;
    c.setRuns(16000);
    cout<<c.getRuns()<<endl;
}
