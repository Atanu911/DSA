#include<iostream>
#include<math.h>
using namespace std;
class Complex{
    public:
    float real;
    float imaginary;
    Complex(int real,int imaginary){
        this->real=real;
        this->imaginary;
    }
    void print(){
        if(imaginary<0){
        cout<<real<<"  - "<<-imaginary<<"i"<<endl;
    }
    else{
        cout<<real<<" + "<<imginary<<"i"<<endl;
    }
    void add(Complex c){
         real = real +c.real;
         imaginary = imaginary +c.imaginary;
    }
    void subtract(Complex c){
        real = real - c.real;
        imaginary = imaginary -c.imaginary;
    }
    void multiply(Complex c){
        real = real*c.real -imaginary*c.imaginary;
        imaginary = real *c.imaginary + imaginary *c.real;
    }
    void division(Complex c){
        double den = c.real*c.real + c.imginary* c.imaginary;
        if(den == 0){
            cout<<"the division is error";
        }
        r =(real*c.real +imaginary*c.imaginary)/den;
        i = (imaginary*c.real -real*c.imaginary)/den;
        real =r;
        imaginary = i;
    }

};
int main(){
    Complex c1(3,7);
    Complex c2(2,4);
    c1.print();
    c2.print();
    c1.add(c2);
    c1.multiply(c2);
}
