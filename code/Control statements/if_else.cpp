#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if ((age < 18) && (age > 1))
    {
        cout << "You are Not  allowed to the club" << endl;
    }
    else if (age == 18)
    {
        cout << "You are allowed but till 9 pm" << endl;
    } // we can use many else if not only one
    else
    {
        cout << "You are allowed to the club" << endl;
    }
}