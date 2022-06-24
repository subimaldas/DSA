// 1
// 2 3
// 3 4 5
// 4 5 6 7
// Here i= row and j= column

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 1;
    cout << "Enter the value of N" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        count = i; // start printing from row.
        while (j <= i)
        {

            cout << count << "  ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}