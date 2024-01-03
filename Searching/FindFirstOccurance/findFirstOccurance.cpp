#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int findFirstOccurance(vector<int>arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int firstOccurance = -1;
    while (start <= end ){
        int mid = start + ((end - start) / 2);
        if(arr[mid] == target){
            firstOccurance = mid;
            end = mid-1;

        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return firstOccurance;
}
int findLastOccurance(vector<int>arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int lastOccurance = -1;
    while (start <= end ){
        int mid = start + ((end - start) / 2);
        if(arr[mid] == target){
            lastOccurance = mid;
            start = mid+1;

        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        
    }
    return lastOccurance;
}

int main()
{
    vector<int> arr{1,2,2,3,3,4,4,4,5,7,7,7,7,7,7,7,7,7,7,7,7,7,7,9,11,13};
    // int firstOccurance = findFirstOccurance(arr, 7);
    // cout << firstOccurance << " ";
    int target = 7;
    int lastOccurance = findLastOccurance(arr, 7);  
    cout << lastOccurance << " ";
    auto lowerBound = lower_bound(arr.begin(), arr.end(), target);
    cout << lowerBound-arr.begin() << endl;
    return 0;
}
