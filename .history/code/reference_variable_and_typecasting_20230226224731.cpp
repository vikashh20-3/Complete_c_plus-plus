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
    // scope resolution operator ---->> ::
    //**************flaot ,double,Long double ************
    // 3.4 //By default this value is double if we want to make it float then 3.4F USE THIS
    float d = 3.4;         // use f after the value to make it float
    long double e = 3.43l; // use l after the value to make it long
    cout << "The value of d is \t" << d << endl
         << "The value of lond double e is \t" << e; // but this will not affect result

    //**************Reference Variables************
    float x = 344;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
}