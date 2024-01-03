#include <iostream>
#include <vector>
using namespace std;

// Print vector
void printVec(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
}

// Take input from user and create vector
vector<int> inputVec()
{
    int n;
    cout << "How many numbers you want to input : ";
    cin >> n;
    cout << endl;
    vector<int> vect(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> vect[i];
    }
    cout << endl;
    return vect;
}

// is in vector
int isIn(vector<int> vect, int num)
{
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] == num)
        {
            vect[i] = INT8_MIN;
            return 1;
        }
    }
    return 0;
}

int main()
{
    // vector<int> arr{1, 1, 2, 3, 3};
    // vector<int> unique;
    // vector<int> arr2;

    // union of array

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int value = arr[i];
    //     int is_in = 0;
    //     for (int k = 0; k < arr2.size(); i++)
    //     {
    //         if (value == arr[k])
    //         {
    //             is_in = 1;
    //         }
    //     }
    //     if (is_in == 0)
    //     {
    //         int value_count = 0;
    //         for (int j = 0; j < arr.size(); j++)
    //         {
    //             if (arr[j] == value)
    //             {
    //                 value_count++;
    //             }
    //         }
    //         if (value_count == 1)
    //         {
    //             unique.push_back(arr[i]);
    //         }
    //     }
    // }

    // // Removing duplicate elements in array

    // vector<int> arr = inputVec();
    // int x = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     x = x ^ arr[i];
    // }
    // cout << x;

    //// Intersection of two vector

    // vector<int> vec2 = inputVec();
    // vector<int> ans;
    // vector<int> vec1 = inputVec();
    // vector<int> temp;

    // for (int i = 0; i < vec2.size(); i++)
    // {
    //     int element = vec2[i];
    //     if (!isIn(ans, element))
    //     {

    //         ans.push_back(element);
    //     }
    // }

    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     int element = vec1[i];
    //     if (isIn(vec2, element))
    //     {
    //         ans.push_back(element);
    //     }
    // }

    // printVec(ans);

    //// is the pair sum == sum

    // int sum;
    // cout << "Enter sum : ";
    // cin >> sum;
    // cout << endl;

    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     int element = vec1[i];

    //     for (int j = i + 1; j < vec1.size(); j++)
    //     {
    //         for (int k = j + 1; j < vec1.size(); j++)
    //         {

    //             for (int l = k + 1; l < vec1.size(); l++)
    //             {
    //                 if (element + vec1[j] + vec1[k] + vec1[l] == sum)
    //                 {
    //                     cout << element << " " << vec1[j] << " " << vec1[k] << " " << vec1[l] << endl;
    //                 }
    //             }
    //         }
    //     }
    // }

    // sort 0 and 1 in vector
    // // vector<int> myVec{0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1};
    // // vector<int> sortedVect(myVec.size());
    // // int startIndex = 0;
    // // int endIndex = myVec.size() - 1;
    // // for (int i = 0; i < myVec.size();i++)
    // // {
    // //     if (myVec[i] ^ 1 == 1)
    // //     {
    // //         sortedVect[startIndex] = 0;
    // //         startIndex++;

    // //     }
    // //     else if (myVec[i] ^ 1 == 0)
    // //     {
    // //         sortedVect[endIndex] = 1;
    // //         endIndex--;
    // //     }
    // // }

    // // for (int i = 0; i != endIndex;)

    // // {
    // //     if (myVec[i] ^ 1 == 1)
    // //     {
    // //         swap(myVec[startIndex], myVec[i]);
    // //         startIndex++;
    // //         i++;
    // //     }
    // //     else if (myVec[i] ^ 1 == 0)
    // //     {
    // //         swap(myVec[endIndex], myVec[i]);

    // //         endIndex--;
    // //     }
    // // }
    // // printVec(myVec);

    return 0;
}
