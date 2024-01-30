#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int *ptr = &a;

    // // Print variable a
    // cout << "value of a: " << a << endl;
    // // Print address of a
    // cout << "value of &a: " << &a << endl;
    // // Now lets Print ptr
    // cout << "value of ptr: " << ptr << endl;
    // // Now Print value at ptr
    // cout << "value of *ptr: " << *ptr << endl; // * is dereference operator
    // // Print address of ptr
    // cout << "value of &ptr : " << &ptr << endl;

    // // Bad Practice
    // // Here output may be garbage value or segmentation error it depends on compiler and system.
    // int *tempPtr;
    // cout << tempPtr << endl;

    // // Null Pointer

    // int *n_ptr1 = 0;
    // int *n_ptr2 = NULL;
    // int *n_ptr3 = nullptr;

    // cout << "n_ptr1 : " << n_ptr1 << endl;
    // cout << "&n_ptr3 : " << &n_ptr1 << endl;
    // // cout << "*n_ptr1 : " << *n_ptr1 << endl; // error or can stop program

    // (*ptr)++; // Increasing the value of value at ptr
    // // Now Print value at ptr
    // cout << "value of *ptr: " << *ptr << endl;

    // // ptr++;  // Increasing the value  ptr address
    // // cout << "value of *ptr: " << *ptr << endl; // results garbage value

    // //*(ptr++);  // Increasing the value of value at ptr
    // // Now Print value at ptr
    // cout << "value of *ptr: " << ptr << endl;

    // // copying the pointer

    // int *ptr2 = ptr;
    // int *ptr3 = ptr2;
    // cout << "value of ptr: " << ptr << endl;
    // cout << "value of ptr2: " << ptr2 << endl;
    // cout << "value of ptr3: " << ptr3 << endl;
    // cout << "value of ptr: " << *ptr << endl;
    // cout << "value of ptr2: " << *ptr2 << endl;
    // cout << "value of ptr3: " << *ptr3 << endl;

    // Array Pointer
    // int arr[] = {10, 20, 30, 40, 50, 60};

    // // Folowing 3 are same
    // cout << "arr : " << arr << endl;
    // cout << "&arr : " << &arr << endl;
    // cout << "&arr[0] : " << &arr[0] << endl;

    // int *arrPtr = arr;
    // cout << "arrPtr : " << arrPtr << endl;
    // cout << "*arrPtr : " << *arrPtr << endl;
    // cout << "&arrPtr : " << &arrPtr << endl;

    // cout << "arr + 1 : " << (arr + 1) << endl;
    // cout << "*(arr + 0) : " << *(arr + 0) << endl;
    // cout << "*(arr + 1) : " << *(arr + 1) << endl;
    // cout << "*(arr + 2) : " << *(arr + 2) << endl;

    // int index = 0;
    // // arr[index] == index[arr]
    // cout << "arr[0] : " << arr[0] << endl;
    // cout << "index[arr] : " << index[arr] << endl;
    // // ----> the formula to acess element is *(address(arr) + index ) == *(index + arr)

    // // it is invalid to increase value of arr because it is stored in symbol table
    // // arr++;

    // // arrPtr but we can increase value of address stored in arr
    // cout << "Before increament address is : " << arrPtr << endl;
    // cout << "Before increament value is : " << *arrPtr << endl;
    // arrPtr++;
    // cout << "After increament value is : " << arrPtr << endl;
    // cout << "After increament address is : " << *arrPtr << endl;

    // int *p1 = arr;
    // // int *p2 = &arr; //Error
    // int *p3 = &arr[0];

    // // make copy of arr
    // int *p4 = p1;

    // // Character array
    // char charArr[] = "RajatRawal";

    // cout << "charArr : " << charArr << endl;
    // cout << "&charArr : " << &charArr << endl;
    // cout << "charArr[0] : " << charArr[0] << endl;
    // cout << "&charArr[0] : " << &charArr[0] << endl;
    // cout << "&charArr[1] : " << &charArr[1] << endl;
    // cout << "charArr + 3 : " << charArr+3 << endl;

    // // With pointer
    // char *charPtr = charArr;
    // // char *charPtr2 = &charArr; // wrong way

    // cout << "*charPtr : " << *charPtr << endl;
    // cout << "charPtr : " << charPtr << endl;

    // char *charPtr3 = &charArr[0]; 
    // cout << "*charPtr3 : " << *charPtr3 << endl;
    // cout << "charPtr3 : " << charPtr3 << endl;

    // cout << "charPtr + 3 : " << (charPtr + 3) << endl;
    // cout << "*(charPtr + 3) : " << *(charPtr + 3) << endl;
    
    // char pointer
    char a = 'a';
    char *aPtr = &a;
    cout << "aPtr some garbage value " << aPtr << endl;
    cout << "aPtr : " << aPtr << endl;

    return 0;
}
