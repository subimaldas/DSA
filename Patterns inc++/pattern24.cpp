//     1
//   2 3
// 4 5 6
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N" << endl;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1, space = 1;
        // For making space
        while (space <= n - i)
        {
            cout << " "
                 << " ";
            space++;
        }
        // For printing number
        
        while (j <= i)
        {
            cout << " " << count;
            count++;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}