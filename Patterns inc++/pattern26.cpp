// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
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
        // For printing number 1-5
        int num = 1;
        while (num <= n - row + 1)
        {
            cout << " " << num;
            num++;
        }

        // For printing star.
        while (column <= row - 1)
        {
            cout << " "
                 << "* *";
            column++;
        }
        // For printing 5-1
        column = n - row + 1;
        while (column >= 1)
        {
            cout << " " << column;
            column--;
        }

        cout << endl;
        row++;
    }

    return 0;
}