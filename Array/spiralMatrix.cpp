#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
   vector<int> spiralOrder(vector<vector<int>> &matrix)
   {
      int m = matrix.size();
      int n = matrix[0].size();
      int startRow = 0, endRow = m, startCol = 0, endCol = n;
      vector<int> arr;
      vector<int> ans;

      int times = 0;
      if (m == 1)
      {

         for (int j = 0; j < n; j++)
         {
            arr.push_back(matrix[0][j]);
         }
         return arr;
      }
      else if (n == 1)
      {
         for (int j = 0; j < m; j++)
         {
            arr.push_back(matrix[j][0]);
         }
         return arr;
      }
      else
      {

         while ((startRow < endRow) && (startCol < endCol))
         {

            for (int i = startCol; i < endCol; i++)
            {
               arr.push_back(matrix[startRow][i]);
            }
            if ((startRow != endRow - 1) && (startCol != endCol - 1))
            {

               for (int i = startRow + 1; i < endRow; i++)
               {
                  arr.push_back(matrix[i][endCol - 1]);
               }

               for (int i = endCol - 2; i >= startCol; i--)
               {
                  arr.push_back(matrix[endRow - 1][i]);
               }
               for (int i = endRow - 2; i >= startRow + 1; i--)
               {
                  arr.push_back(matrix[i][startCol]);
               }
            }
            else
            {
               cout << "startRow " << startRow << " endRow " << endRow << endl;
               cout << " startCol " << startCol << " endCol " << endCol << endl;
               if (m > 3)
               {
                  cout << "startRow " << startRow << " endRow " << endRow << endl;

                  for (int i = startRow + 1; i < endRow; i++)
                  {
                     arr.push_back(matrix[i][endCol - 1]);
                  }
               }
            }
            times++;
            startRow++;
            startCol++;
            endRow--;
            endCol--;
         }
      }

      return arr;
   }
};