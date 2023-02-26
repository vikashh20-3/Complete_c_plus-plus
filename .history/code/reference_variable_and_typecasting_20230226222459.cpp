#include <iostream>
using namespace std;
int c = 39;
int main()
{
    int a, b, c;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    c = a + b;
    cout << c << endl;

    cout << "This variable c is local scope declared inside the function :\t " << c << endl;
    cout << "This variable c is global scope declared outside the funciton : \t" << ::c; // if you want to take the value of global variable use this operator
    // scope resolution operator
}