#include<iostream>
using namespace std;
class Fraction{
    public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }
    Fraction(){

    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){
        num = num*f.num;
        den =den *f.den;

    }

};
Fraction multiply(Fraction& f1,Fraction& f2){
   Fraction res;
   res.num = f1.num*f2.num;
   res.den = f1.den*f2.den;
   return res;
}

int main(){
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.print();
    f1.multiply(f2);//f1 me f2 multiply kardo..
    f1.print();

}
1:52:33.