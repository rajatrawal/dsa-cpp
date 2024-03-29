#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{

    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    /// method 1
    // if (arr[mid] < target)
    // {
    //     start = mid + 1;
    // }
    // else
    // {
    //     end = mid - 1;
    // }
    // return binarySearch(arr, start, end, target);

    // method 2

    if (target > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, target);
    }
}

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 110, 120, 130, 140, 150};
    cout << binarySearch(arr, 0, 14, 120);
    return 0;
}
