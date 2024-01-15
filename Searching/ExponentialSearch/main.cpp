#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int> arr, int target)
{
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < arr.size() && arr[i] <= target)
    {
        i *= 2;
    }
    return i;
}

int min(int a, int b)
{

    return a < b ? a : b;
}

int binarySearch(vector<int> arr, int start, int end, int target)
{

    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9, 11, 14, 17, 18, 20, 23};
    int target = 25;
    int index = findIndex(arr, target);
    cout << "index is : " << index << endl;
    int ans = binarySearch(arr, index / 2, min(index, arr.size() - 1), target);
    cout << "ans is : " << ans << endl;
    return 0;
}
