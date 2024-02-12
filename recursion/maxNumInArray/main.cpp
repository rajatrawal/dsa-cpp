#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>
int maxInArray(int arr[], int n)
{
    if (n == 0)
    {
        return arr[n];
    }

    int max = maxInArray(arr + 1, n - 1);

    if (max > arr[0])
    {
        return max;
    }
    return arr[0];
}

void maxInArray2(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }

    maxInArray2(arr, n, i + 1, maxi);
}

int minInArray(int arr[], int n)
{
    if (n == 0)
    {
        return arr[n];
    }

    int min = minInArray(arr + 1, n - 1);

    if (min < arr[0])
    {
        return min;
    }

    return arr[0];
}

void minInArray2(int arr[], int n, int i, int &min)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] < min)
    {
        min = arr[i];
    }
    minInArray2(arr, n, i + 1, min);
}

int findInArary(int arr[], int n, int target, int index)
{
    cout << index << endl;
    if (index >= n)
    {
        return -1;
    }
    if (target == arr[index])
        return index;
    int ans = findInArary(arr, n, target, index + 1);
    return ans;
}

int count(int arr[], int n, int target)
{
    if (n == 0)
    {
        if (arr[0] == target)
        {
            return 1;
        }
        return 0;
    }

    int c_count = count(arr + 1, n - 1, target);

    if (arr[0] == target)
    {
        return c_count + 1;
    }
    return c_count;
}

// find in string

bool isInString(string s, char f, int i = 0)
{
    if (s[i] == '\0')
    {
        return false;
    }
    if (s[i] == f)
    {
        return true;
    }
    return isInString(s, f, i + 1);
}

// find in string with index

int findInString(string &s, char &f, int &i)
{
    if (s[i] == '\0')
    {
        return -1;
    }
    if (s[i] == f)
    {
        return i;
    }
    return findInString(s, f, ++i);
}
void findAllInString(string s, char f, int arr[], int &i, int &arrIndex)
{
    if (s[i] == '\0')
    {
        return ;
    }
    if (s[i] == f)
    {
        arr[arrIndex] = i;
        arrIndex++;
    }
    findAllInString(s, f, arr, ++i, arrIndex);
}




int main()
{
    int arr[18] = {50, 0, 70, 80, 90, 100, 10, 20, 30, 40, 146, 7, 12, 13, 0, 50, 0, 10};
    // cout << maxInArray(arr, 13) << endl;
    // cout << minInArray(arr, 13) << endl;
    // cout << findInArary(arr, 13, 20, 0) << endl;
    // cout << count(arr, 17, 60) << endl;
    // ------------------------------------------------------------------------------------------------------------------

    // int maxi = -1;
    // maxInArray2(arr, 18, 0, maxi);
    // cout << maxi << " ";
    // ------------------------------------------------------------------------------------------------------------------

    // int min = INT_MAX;
    // minInArray2(arr, 18, 0, min);
    // cout << min << endl;
    // ------------------------------------------------------------------------------------------------------------------

    // cout << isInString("rajat rawal", 'w');

    // ------------------------------------------------------------------------------------------------------------------
    // int i = 0;
    // string s = "rajat rawal";
    // char f = ' ';
    // cout << findInString(s, f, i);
    // ------------------------------------------------------------------------------------------------------------------

    int i = 0;
    string s = "rajat rawal";
    char f = 'a';
    int ansArr[] = {};
    int arrIndex = 0;
    findAllInString(s, 'a', ansArr, i, arrIndex);

    for (int i = 0; i < arrIndex;i++){
        cout << ansArr[i] << endl;
    }

        return 0;
}
