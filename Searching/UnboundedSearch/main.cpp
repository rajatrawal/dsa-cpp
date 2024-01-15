#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int> arr, int target)
{
    if (arr[0] == target)
    {
        return target;
    }
    int i = 1;
    while (arr[i] <= target)
    {

        i = i << 1;
    }
    return i;
}

int main()
{
    vector<int> arr{1};
    for (int i = 2; i < 2000; i+=2)
    {
        arr.push_back(i);
    }
    cout << findIndex(arr,12) << endl;
    return 0;
}
