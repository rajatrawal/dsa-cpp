#include <vector>
#include <iostream>
using namespace std;

int findOddElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        bool isLeftEven = false;
        if (mid < arr.size() && arr[mid] == arr[mid + 1])
        {
            if ((mid - 1 - start) % 2 != 0)
            {

                start = mid + 2;
            }
            else
            {
                end = mid - 1;
            }
        }

        else if (mid > 0 && arr[mid] == arr[mid - 1])
        {
            if ((mid - start) % 2 != 0)
            {

                start = mid + 1;
            }
            else
            {
                end = mid - 2;
            }
        }
        else
        {
            return arr[mid];
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 1, 2, 2, 5, 5, 4, 4, 5, 5, 6, 6, 7, 7, 8, 4, 4};
    cout << findOddElement(arr) << endl;

    return 0;
}
