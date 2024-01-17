#include <iostream>
#include <string.h>
using namespace std;

int sizeOf(char arr[])
{
    int i = 0;
    while ((int)arr[i] != 0)
    {
        i++;
    }
    return i;
}

void revString(char arr[])
{
    int start = 0;
    int end = sizeOf(arr) - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // return arr;
}

void replace(char arr[], char a, char b)
{
    for (int i = 0; i < sizeOf(arr); i++)
    {
        if (arr[i] == a)
        {
            arr[i] = b;
        }
    }
}

bool isPalindrome(char arr[])
{
    int start = 0;
    int end = sizeOf(arr) - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void toUpperCase(char arr[])
{
    for (int i = 0; i < sizeOf(arr); i++)
    {
        int num = (int)arr[i];
        if (num >= 97 && num < 123)
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
void toLowerCase(char arr[])
{
    for (int i = 0; i < sizeOf(arr); i++)
    {
        int num = (int)arr[i];
        if (num > 64 && num < 91)
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char arr[100];
    cout << "Enter any text : ";
    cin.getline(arr, 100);
    // arr[2] = 'b';
    cout << endl;

    // calculate size of string

    // cout << "size of arr is " << sizeOf(arr) <<endl;
    // cout << "size of arr is -> " << strlen(arr);

    // reverse a string
    // revString(arr);
    // cout << "rev of arr is -> " << arr;

    // replace space
    // replace(arr,'r','y');
    // cout << "replace  arr is -> " << arr;

    // is palindrome
    // cout << "is palindrome : " << isPalindrome(arr) << endl;

    // convert to uppercase
    // toUpperCase(arr);
    // cout << "to uppercase " << arr;

    // toLowerCase(arr);
    // cout << "to lowercase " << arr;
    return 0;
}
