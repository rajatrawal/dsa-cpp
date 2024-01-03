#include <iostream>
using namespace std;

int isInArray(int arr[][4], int rows, int cols, int element, int axis = 0)
{
    if (axis == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] == element)
                {
                    return 1;
                }
            }
        }
    }
    else
    {
        for (int j = 0; j < cols; j++)
        {
            for (int i = 0; i < rows; i++)
            {
                if (arr[i][j] == element)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int transpose(int arr[][4], int rows, int cols)
{
    int transArr[cols][rows];
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            transArr[j][i] = arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transArr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeSquareMatrix(int arr[][4], int rows, int cols)
{
    int count = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0 + i; j < cols; j++)
        {
            swap(arr[i][j], arr[j][i]);
            count++;
        }
    }
}

void minMax(int arr[][4], int rows, int cols)

{
    int max = INT8_MIN;
    int min = INT8_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Min is " << min << " and Max is " << max;
}

int main()
{

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 56, 78, 56},
    };

    // row wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "Enter " << ((4 * i) + j) << " number : ";
    //         cin >> arr[i][j];
    //         cout << endl;
    //     }
    // }

    // column wise input

    // int number = 0;
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Enter " << number << " number : ";
    //         cin >> arr[i][j];
    //         cout << endl;
    //         number++;
    //     }
    // }

    // col wise sum  output
    // for (int j = 0; j < 4; j++)
    // {
    //     int rowSum = 0;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << arr[i][j] << " ";
    //         rowSum += arr[i][j];
    //     }
    //     cout << " = " << rowSum;
    //     cout << endl;
    // }

    // // row wise sum  output
    // for (int i = 0; i < 3; i++)
    // {
    //     int rowSum = 0;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //         rowSum += arr[i][j];
    //     }
    //     cout << " = " << rowSum;
    //     cout << endl;
    // }

    // cout << "element found status : " << isInArray(arr, 3, 4, 6);

    // minMax(arr, 3, 4);
    transpose(arr, 4, 4);
    transposeSquareMatrix(arr, 4, 4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
// 1 2 3 4 5
// 4 5 6 4 5
// 7 8 9 4 5
// 8 8 8 8 5
// 7 7 7 7 7

// 1 2 3 4  10
// 5 6 7 8  26
// 9 10 11 12  42