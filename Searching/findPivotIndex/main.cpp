#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    int first = arr[0];

    while (start <= end)
    {
        mid = start + (end - start) / 2;


  

            if (mid+1 <= end && arr[mid] < arr[mid + 1])
            {
                if (arr[mid] >= first)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            else
            {
                return mid;
            }
        
     
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    // vector<int> arr{10, 0, 1, 2, 3, 4, 5, 7, 8};
    vector<int> arr{1,3};
    // 3,2,1,10,9,8,7,6,5,4
    // vector<int> arr{3,2,1,10,9,8,7,6,5,4};
    cout << "pivot index is :" << findPivot(arr) << endl;

    return 0;
}
