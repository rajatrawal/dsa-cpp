#include <iostream>
using namespace std;

int main()
{
    // how to find address 

    // int a = 10;
    // char b = '1';
    // double c = 123.3343434;
    // cout << &a <<  endl;
    // cout << &b <<  endl;

    // creating a pointer in cpp

    // int *ptrA = &a;
    // char *ptrB = &b;
    // double *ptrC = &c;

    // cout << &a <<endl;
    // cout << sizeof(ptrA) <<endl;
    // cout << sizeof(ptrB) <<endl;
    // cout << sizeof(ptrC) <<endl;

    // Bad practice
    // int* ptr;
    // cout << *ptr <<endl ;

    // Good Practice
    // int *nullPtr=0;
    // cout << *nullPtr << endl;

    // some timepass
    // int a = 5;
    // int *ptr = &a;

    // copy pointer
    // int *ptr2 = ptr;

    // cout << "ptr " << ptr << endl;
    // cout << "ptr 2 : " << ptr2 << endl;
    // cout << "prt  value : "<< *ptr << endl;
    // cout << "prt2 value : "<< *ptr2 << endl;

    int a = 5;
    int *x = &a;
    int *y = x;
    int *z = y;

    cout  << a  << endl;
    cout  << &a << endl;
    cout  << x << endl;
    cout  << *x << endl;
    cout  << &x << endl;
    cout  << y << endl;
    cout  << *y << endl;
    cout  << &y << endl;
    cout  << z << endl;
    cout  << *z << endl;
    cout  << &z << endl;
    cout  << (*x + *y + *z) << endl;
    cout  << (*x * *y * *z) << endl;
    
    return 0;
}
