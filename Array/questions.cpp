#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

void printArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int isIn(vector<int> arr, int element)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

void printVector(vector<int> arr)
{
    for (auto value : arr)
    {
        cout << value << " ";
    }
}
int missingNumber(vector<int> &array, int n)
{
    int sum = 0;
    int real_sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        cout << i << " : " << array[i] << endl;
        sum += array[i];
    }

    return real_sum - sum;
}
// int missingNumber(vector<int> nums)
// {
//     for (int i = 0; i < nums.size() + 1; i++)
//     {
//         if (!isIn(nums, i))
//         {
//             return i;
//         }
//     }
// }
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> arr;
    unordered_map<int, int> hash;
    int max = INT8_MIN;
    for (int i = 0; i < n1; i++)
    {
        if (hash[A[i]] == 0)
        {
            hash[A[i]]++;
        }

        if (A[i] > max)
        {
            max = A[i];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        // cout << B[i] << " ";
        if (hash[B[i]] == 1)
        {

            hash[B[i]]++;
        }

        if (B[i] > max)
        {
            max = B[i];
        }
    }

    for (int i = 0; i < n3; i++)
    {

        if (hash[C[i]] == 2)
        {
            hash[C[i]]++;
        }
        if (C[i] > max)
        {
            max = C[i];
        }
    }

    for (int i = 0; i < max + 1; i++)
    {
        if (hash[i] == 3)
        {
            arr.push_back(i);
        }
    }
    if (arr.size() == 0)
    {
        arr.push_back(-1);
    }

    return arr;
}

void printVec(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
}

int findDuplicate(vector<int> &nums)
{

    for (int i = 0; i < nums.size() ; i++)
    {
        int index = nums[i] ;
        cout << "i : " << i << " value : " << nums[index] << endl;

        if (nums[index] == INT8_MIN)
        {
            cout << nums[i] << endl;
            return nums[i];
        }
        else
        {
            nums[index] = INT8_MIN;
        }
    }
    return -1;
}

int main()
{
    // sort 0 1 2 in array

    // int arr[19] = {0, 0, 0, 1, 2, 1, 1, 0, 1, 1, 0, 2, 2, 0, 1, 0, 1, 0,2};
    // int start = 0;
    // int end = 18;
    // int i = 0;
    // int innerEndIndex = 18;
    // while (start <= end)
    // {
    //     cout << "Current number is : " << arr[i] << endl;
    //     if (arr[i] == 0)
    //     {
    //         swap(arr[i], arr[start]);
    //         start++;
    //         i++;
    //     }
    //     else
    //     {
    //         swap(arr[end], arr[i]);
    //         if (arr[end] == 2)
    //         {
    //             swap(arr[end], arr[innerEndIndex]);
    //             innerEndIndex--;
    //         }
    //         end--;
    //     }

    //     cout << "Start : " << start << " End : " << end;
    //     cout << endl;
    //     cout << "Iteration " << i << " : ";
    //     printArr(arr,18);
    //     cout << endl;
    // }

    //---------------------------------------------------------------------------------------------

    // sort array by negative to positive number

    // int arr[11] = {-10, 2, 3, -2, -5, -6, 7, 6, 9, -7, 56};
    // int start = 0;
    // int end = 10;
    // int i = 0;
    // while (start < end)
    // {
    //     if (arr[i] < 0)
    //     {
    //         swap(arr[i], arr[start]);
    //         start++;
    //         i++;
    //     }
    //     else
    //     {
    //         swap(arr[i], arr[end]);
    //         end--;
    //     }
    //     cout << "Iteration " << i << " : ";
    //     printArr(arr, 10);
    //     cout << endl;
    // }

    // int arr[8] = {1, -1, 3, 2, -7, -5, 11, 6};
    // int tempArr[8];
    // int start = 0;
    // for (int i = 0; i < 8; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         tempArr[start] = arr[i];

    //         start++;
    //     }
    // }
    // for (int i = 0; i < 8; i++)
    // {
    //     if (arr[i] < 0)
    //     {
    //         tempArr[start] = arr[i];
    //         start++;
    //     }
    // }

    // printArr(tempArr, 8);

    //---------------------------------------------------------------------------------------------

    // vector<int> arr{1, 2, 3, 4, 8, 5, 6, 7, 8, 9, 10, 2, 5, 7};
    // vector<int> unique;
    // vector<int> duplicate;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (!isIn(unique, arr[i]))
    //     {
    //         unique.push_back(arr[i]);
    //     }
    //     else
    //     {
    //         duplicate.push_back(arr[i]);
    //     }
    // }
    // vector<int> arr{0, 1, 2, 3, 5, 6, 7};
    // cout << missingNumber(arr);
    // printVector(duplicate);

    //---------------------------------------------------------------------------------------------

    // get unique element in three array

    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    // int arr[] = {9, 4, 7, 8, 3, 5, 1, 2, 0, 1, 6};
    // printVec(commonElements(arr1, arr2, arr3, 6, 5, 8));

    //---------------------------------------------------------------------------------------------
    // long long i, fact = 1;
    // for (i = 1; i < 100; i++)
    // {
    //     fact *= i;
    //     cout << "i : " << i << " : " << fact << endl;
    // }
    //---------------------------------------------------------------------------------------------

    // vector<int> arr{1, 2, 3, 5};
    // missingNumber(arr, 5);
    //---------------------------------------------------------------------------------------------
    vector<int> arr{1,3,4,2,2};
    cout << "Duplicate : "  << findDuplicate(arr);
}
