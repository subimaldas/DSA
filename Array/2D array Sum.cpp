Question: Find Row/Col Wise sum in 2D arrays.

CODE:
#include <iostream>

using namespace std;

bool printSum(int arr[][4], int row, int col)
{
    cout << "Printing the sum" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 4; col++)
        {
            sum += arr[row][col];
            //  for col wise sum
            //  sum += arr[col][row];
        }
        cout << sum << endl;
    }
}

int main()
{
    // Create 2D array
    int arr[3][4];
    cout << "Enter the values in the array" << endl;
    // taking input(row-wise)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            // For column-wise use arr[j][i]
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

    printSum(arr, 3, 4);
    return 0;
}
