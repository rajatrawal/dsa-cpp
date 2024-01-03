#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
};
int main()
{

    int arr[] = {2, 3, 5, 6, 7, 9, 10, 13, 16, 19};
    int target = 11;
    int size = 10;
    // int indexOfTarget = binarySearch(arr, size, target);
    // if (indexOfTarget == -1)
    // {
    //     cout << "Target not found in array ";
    // }
    // else
    // {
    //     cout << "Target found at index " << indexOfTarget;
    // }


    // With the help of standard library in vector
    // vector<int> arr2{3, 5, 6, 7, 9, 11, 12, 15, 18};
    // if (binary_search(arr2.begin(), arr2.end(), 16))
    // {
    //     cout << "Element found ";
    // }
    // else
    // {

    //     cout << "Not found ";
    // }

    // With the help of standard library in array 
        if (binary_search(arr, arr+size, 17))
    {
        cout << "Element found ";
    }
    else
    {

        cout << "Not found ";
    }

    return 0;
}
