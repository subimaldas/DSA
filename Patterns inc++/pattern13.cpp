// A B C
// A B C
// A B C
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
            char ch = 'A' + j - 1;
            cout << ch << "  ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}