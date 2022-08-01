Question: Largest row sum and return the index of the row.
  
  
  CODE:
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int RowIndex = -1;
    for (int row = 0; row < 3; row++)
    {

        int sum = 0;
        for (col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            RowIndex = row;
        }
    }
    cout << "The maximum RowSum is" << maxi << endl;
    return RowIndex;
}

int main()
{

    int arr[3][4];
    cout << "Enter the values in the array" << endl;
    // taking input(row-wise)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestRowSum(arr, 3, 4);
    cout << "The maximum row is at index" << ansIndex << endl;
    return 0;
}
