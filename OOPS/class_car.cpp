#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int seats;
    int power;
    string color;
    int price;
    float mielage;
    bool sunroof;
    bool isE20Compatible;
};
int main(){
    Car c1;
    c1.name = "Kia";
    c1.seats = 4;
    c1.power = 118;
    c1.color = "red";
    c1.mielage = 9.2;
    c1.isE20Compatible = true;

    Car c2 = {"Toyota Fortuner",6,200,"white",8.8,flase};
    cout<<c2.power<<endl;
}