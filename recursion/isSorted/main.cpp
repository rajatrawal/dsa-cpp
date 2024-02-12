#include <iostream>
using namespace std;
bool isSorted(int arr[], int &n, int &i, bool &asc)
{
    if (i == n - 1)
    {
        return true;
    }

    if (i == 0)
    {
        if (arr[0] <= arr[n - 1])
        {
            asc = true;
        }
    }

    if ((arr[i] < arr[i + 1] && !asc) || (arr[i] > arr[i + 1] && asc))
    {

        return false;
    }

    return isSorted(arr, n, ++i, asc);
}

int main(int argc, char const *argv[])

{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 11};
    int arr[] = {10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 3};

    int n = 12;
    int i = 0;
    bool asc = false;
    cout << isSorted(arr, n, i, asc);

    return 0;
}
