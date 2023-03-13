#include <iostream>
using namespace std;
struct student
{
    /* data */
    int id;
    char name;
};
// 2nd method
typedef struct employee
{
    int eid;
    char name;
} ep; // we can use anything in place of ep no matter what you want to wrie

union money // in the union we can use only one at a time not all the entities like the struct

{
    int money;
    char car;
    float pounds;
};
int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        diner
    };
    Meal me = breakfast;
    cout << me << endl;
    struct student vikashh;
    //   vikash.id=2;
    vikash.name = 'v';
    cout << vikash.name << endl;
    // taking the struch employee
    ep vikku;
    vikku.eid = 23;
    cout << vikku.eid << endl;
    // union money
    union money m1;
    m1.money = 100;
    m1.car = 'm';
    cout << m1.car << endl;
    // cout<<m1.money<<endl;// it will give now garbage value because we declare car after money
    // we can use only one in union
}