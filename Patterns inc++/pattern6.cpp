// 16 15 14 13
// 12 11 10 9
// 8  7  6  5
// 4  3  2  1

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
        while (j <= n)
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