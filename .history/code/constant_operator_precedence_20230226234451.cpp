#include <iostream>
using namespace std;
int main()
{
    int c = 34;
    cout << c << endl;
    c = 454;
    cout << c << endl; // here we can change the value of c from 34 to 454
    // Constants in C++
    const int a = 5;
    cout << "The value of a is : \t" << a << endl;
    // a=34; // this will show error you can't change the value of a variable

    // Manipulators
    // setw(sizeofwidth)
    int one = 4, two = 34, three = 332;
    cout << "The value of one without setw() is :" << one << endl;
    cout << "The value of two without setw() is :" << two << endl;
    cout << "The value of three without setw() is :" << three << endl;

    cout << "The value of one  is :";
    << setw(3) << one << endl;
    cout << "The value of two  is :" << setw(3) << two << endl;
    cout << "The value of three is :" << setw(3) << three << endl;

    //****Operator Precedence
    int an = 3, bn = 4;
    int c = ((((an * 5) + bn) - 45) + 87);
}