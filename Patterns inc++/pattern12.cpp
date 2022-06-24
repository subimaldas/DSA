// A A A A
// B B B B
// C C C C
// D D D D
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << char(65 + i - 1) << "  ";

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}