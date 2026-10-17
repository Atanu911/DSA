#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;
class Car{
    public:
    string name;
    int power;
    float mileage;

    Car(string n,int p,float m){
        name = n;
        power = p;
        mileage = m;
    }
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<endl;
    }
};
void print(Car x){
    cout<<x.name<<" "<<x.power<<" "<<x.mileage<<endl;
}

int main(){
    Car c1 = {"Kia",110,9.5};
    cout<<c1.name<<" "<<c1.power<< " "<<c1.mileage<<endl;
    Car c2 = {"Toyota Fortuner",200,10.5};
    c1.print();
    c2.print();
    
}