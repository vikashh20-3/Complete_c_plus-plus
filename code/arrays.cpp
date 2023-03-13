// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {34, 23, 53, 23}; // 4 is optional
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    // you can change the value of an array
    marks[0] = 10;
    cout << "Changed mark of value " << marks[0] << endl;

    // Printing the values of array with the loop
    for (int i = 0; i < 4; i++)
    {
        cout << "The values with the help of loop is " << i << " is " << marks[i] << endl;
    }
    // we can give the value in another way
    int mathmarks[4];
    mathmarks[0] = 393;
    mathmarks[1] = 3323;
    mathmarks[2] = 343;
    mathmarks[3] = 64393;
    cout << "These are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
}