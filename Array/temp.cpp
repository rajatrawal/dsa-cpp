#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
}

// Negative Flag Method
void findMissing1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;

        arr[index] *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
}
// Sort Method
void findMissing(int arr[], int n)
{
    // sort(arr, arr + n - 1);
    int i = 0;
    while (i < n - 1)
    {
        if (arr[i] != arr[arr[i] - 1])
        {
            
            swap(arr[i], arr[arr[i] - 1]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
       
    }
}
int main()
{
    int arr[] = {1, 3, 3, 3, 5};
    findMissing(arr, 5);

    return 0;
}
