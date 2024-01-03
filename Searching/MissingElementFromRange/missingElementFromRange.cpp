#include<iostream>
#include<vector>
using  namespace std;

int main()
{
    vector<int>arr{0,1,2,3,4,5,6,7,8,9};
    int start = 0,mid=0,diff=0;
    int end = arr.size()-1;
    while(start<end){
        mid = start + (end - start) / 2;

        if(arr[mid] - mid == 0 ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(arr[end +1]-arr[end]==2){

    cout <<arr[end]+1;
    }
    else{
    cout <<arr[end]-1;

    }



    return 0;
}
