#include <iostream>

using namespace std;


//Search Function
bool isPresent(int arr[][4], int target, int row, int col) // here in case of 2d arry we have to declare col(4)
{
    for (int row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    // Create 2D array
    int arr[3][4];

    // taking input(row)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found";
    }
    else
    {
        cout << " Element not found";
    }
    return 0;
}
