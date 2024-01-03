#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void printVec(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
}
string calc_Sum(int *a, int n, int *b, int m)
{
    vector<int> sum_arr;
    int carry = 0;
    int i = n - 1;
    int j = m - 1;
    string result = "";

    while (i >= 0 || j >= 0)
    {
        int first_num = 0, second_num = 0;
        if (i >= 0)
        {
            first_num = a[i];
        }
        if (j >= 0)
        {
            second_num = b[j];
        }
        int sum = first_num + second_num + carry;
        carry = 0;
        if (i > 0 || j > 0)
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        result = to_string(sum) + result;
        i--;
        j--;
    }

    int zeros = 0;
    while (result[zeros] == '0')
    {
        zeros++;
    }
    result.erase(0, zeros);
    return result;
}
int main()
{
    int arr1[] = {0, 9, 1, 0};
    int arr2[] = {9, 8, 0};
    cout << calc_Sum(arr1, 4, arr2, 3);

    return 0;
}
