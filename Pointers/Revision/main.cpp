#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;

    // Print variable a 
    cout << "value of a: " << a << endl;
    // Print address of a
    cout << "value of &a: " << &a << endl;
    // Now lets Print ptr
    cout << "value of ptr: " << ptr << endl;
    // Now Print value at ptr
    cout << "value of *ptr: " << *ptr << endl; // * is dereference operator
    // Print address of ptr
    cout << "value of &ptr : " << &ptr << endl;


    // Bad Practice
    // Here output may be garbage value or segmentation error it depends on compiler and system.
    int *tempPtr;
    cout << tempPtr << endl;

    // Null Pointer

    int * n_ptr1 = 0;
    int * n_ptr2 = NULL;
    int * n_ptr3 = nullptr;

    cout << "n_ptr1 : " << n_ptr1 << endl;
    cout << "&n_ptr3 : " << &n_ptr1 << endl;
    // cout << "*n_ptr1 : " << *n_ptr1 << endl; // error or can stop program

    (*ptr)++;  // Increasing the value of value at ptr
    // Now Print value at ptr
    cout << "value of *ptr: " << *ptr << endl;
    
    // ptr++;  // Increasing the value  ptr address
    // cout << "value of *ptr: " << *ptr << endl; // results garbage value

    //*(ptr++);  // Increasing the value of value at ptr
    // Now Print value at ptr
    // cout << "value of *ptr: " << ptr << endl;

    // copying the pointer

    int *ptr2 = ptr;
    int *ptr3 = ptr2;
    cout << "value of ptr: " << ptr << endl;
    cout << "value of ptr2: " << ptr2 << endl;
    cout << "value of ptr3: " << ptr3 << endl;
    cout << "value of ptr: " << *ptr << endl;
    cout << "value of ptr2: " << *ptr2 << endl;
    cout << "value of ptr3: " << *ptr3 << endl;
    

    return 0;
}
