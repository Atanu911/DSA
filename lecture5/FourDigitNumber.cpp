#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter your number:";
    cin >> x;
    if (x >= 1000 && x <= 9999)
        cout << "Number is 4 digit number";
    else cout<<"Not a 4 digit number";
}