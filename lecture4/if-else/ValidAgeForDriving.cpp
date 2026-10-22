#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";

    cin >> age;
    cout << age << endl;
    if(age>=18) cout<<"You can DRIVE";
    else cout<<"You cannot drive";
}