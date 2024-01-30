#include <iostream>
using namespace std;

void increment(int &a)
{
    a++;
}
void increment2(int *ptr)
{
    cout << "Value of p " << ptr << endl;
    cout << "value of *p : " << *ptr << endl;
    cout << "value of &p " << &ptr << endl;
    (*ptr)++;
    cout << "value of *p : " << *ptr << endl;
    cout << "Value of p " << ptr << endl;
}
void util(int *ptr)
{
    cout << "Value of *ptr inside the fucntion : " << *ptr << endl;

    *ptr = *ptr + 1;
    cout << "Value of *ptr inside the fucntion : " << *ptr << endl;
}
void solve(int **ptr)
{
    cout << "Value of ptr inside the fucntion : " << *ptr << endl;

    **ptr = **ptr + 1;
    cout << "Value of ptr inside the fucntion : " << *ptr << endl;
}

int main(int argc, char const *argv[])
{
    // int a = 5;
    // int *p = &a;
    // int**p2 = &p;

    // cout << "Value of a is : " << a << endl;
    // cout << "Value of &a is : " << &a << endl;
    // cout << "Value of p " << p << endl;
    // cout << "value of &p " << &p << endl;
    // cout << "value of *p : " << *p << endl;
    // cout << "Value of p2 " << p2 << endl;
    // cout << "value of &p2 " << &p2 << endl;
    // cout << "value of *p2 : " << *p2 << endl;
    // cout << "value of **p2 : " << **p2 << endl;
    // ----------------------------------------------------------------------------------------
    // int a = 5;
    // int *p = &a;
    // cout << "Value of a is : " << a << endl;
    // cout << "Value of &a is : " << &a << endl;
    // cout << "Value of p before using function " << p << endl;
    // cout << "value of &p before using function " << &p << endl;
    // cout << "value of *p before using function : " << *p << endl;
    // cout << endl;
    // util(p);
    // cout << endl;
    // cout << "Value of p after using function " << p << endl;
    // cout << "value of &p after using function " << &p << endl;
    // cout << "value of *p after using function : " << *p << endl;
    // cout << endl;
    // ----------------------------------------------------------------------------------------
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << "Value of a is : " << a << endl;
    // cout << "Value of p is : " << *p << endl;
    // solve(q);
    // cout << "Value of a is : " << a << endl;
    // cout << "Value of p is : " << *p << endl;

    // **q = *q + 1;
    // cout << **p << endl;

    // -----------------------------------------------------------------------------------------------------

    // refrance variable

    int a = 10;
    int &b = a;

    // cout << "Value of a is : " << a << endl;
    // cout << "Value of &a is : " << &a << endl;
    // cout << "Value of b is : " << b << endl;
    // cout << "Value of &b is : " << &b << endl;

    // -------------------------------------------------------------------------------------------
    // cout << "Value of a is : " << a << endl;

    // increment(b);
    // cout << "Value of a is : " << a << endl;

    // ---------------------------------------------------------------------------
    // cout << "Value of a is : " << a << endl;

    increment2(&a);
    // cout << "Value of a is : " << a << endl;

    return 0;
}
