//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        // For printing space
        int space = 1;
        while (space <= n - row)
        {
            cout <<" "<< " ";
            space++;
        }

        // For printing 1st triangle
        while (column <= row)
        {
            cout  <<" "<< column;
            column++;
        }
        // For printing 2nd trriangle
        column=row -1;
        while (column>=1)
        {
            cout <<" "<< column;
            column--;
        }
        

        cout << endl;
        row++;
    }

    return 0;
}