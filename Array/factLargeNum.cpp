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
vector<int> factorial(int N)
{
    vector<int> arr{1};
    int carry = 0;
    int value;

    for (int i = 1; i < N + 1; i++)
    {

        int size = arr.size();
        for (int j = 0; j < size; j++)
        {
            int multi = (arr[j] * i) + carry;
            value = multi % 10;
            carry = multi / 10;
            arr[j] = value;
        }
        while (carry)
        {
            arr.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    return arr;
}
int main(int argc, char const *argv[])
{

    printVec(factorial(19));
    return 0;
}
