#include <iostream>
using namespace std;
bool isAscSorted(int arr[], int &n, int &i)
{
    if(i>=n || n==1)    {
        return true;
    }
    if(i < n-1 && arr[i] < arr[i+1]){
        return false;
    }
    return isAscSorted(arr, n, ++i);
}

int main(int argc, char const *argv[])

{
    int arr[] = {10,10,9,8,7,6,5,4,3,2,1,-11};
    int n = 11;
    int i = 0;

    cout << isAscSorted(arr, n, i);

    return 0;
}
