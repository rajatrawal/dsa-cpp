#include <iostream>
using namespace std;
bool isAscSorted(int arr[], int &n, int &i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i + 1] < arr[i])
    {
        return false;
    }
    isAscSorted(arr, n, ++i);
}

int main(int argc, char const *argv[])

{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6, 9, 10};
    int n = 10;
    int i = 0;

    cout << isAscSorted(arr, n, i);

    return 0;
}
