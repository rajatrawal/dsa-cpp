#include <iostream>
#include <vector>
using namespace std;

int printArr(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << *arr << " ";

    printArr(arr + 1, n - 1);
}

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int power(int base, int n)
{
    if (n == 1)
    {
        return base;
    }
    return base * power(base, n - 1);
}

int fibo(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

 
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

void count(int n)
{
    if (n == 0)
        return;
    // cout << n << endl; // tail recurr
    count(n - 1);
    cout << n << endl; // head recurr
}
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printArr(arr, 10);

    // +++++++++++++++++++++++++++++++++++++++++++++++++++

    // cout << fact(5) << endl;
    // cout << power(2,3) << endl;
    cout << fibo(5) << endl;
    
    ;
    // count(10);

    return 0;
}
