#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> arr, int axis = 0)
{
    if (axis == 1)
    {

        for (int j = 0; j < arr[0].size(); j++)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 3, 9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    vector<vector<int>> arr(3, vector<int>(5, 0));

    printVector(arr);

    return 0;
}
