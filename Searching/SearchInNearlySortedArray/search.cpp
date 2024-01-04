#include <iostream>
#include <vector>
using namespace std;
int searchInArray(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0, f, l;
    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }
        else if(target == arr[mid-1] && mid - 1 >=start){
            return mid-1;
        }
        else if(target == arr[mid+1] && mid + 1 <=end){
            return mid+1;
        }
        else if (target < arr[mid])
        {
            end = mid - 2;
        }
        else if (target > arr[mid] )
        {
            start = mid + 2;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70, 100, 90};
    cout << searchInArray(arr, 90);
}