// A B C
// B C D
// C D E
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
            char ch = 'A' + i + j - 2; // i+j-1=1 and A+i +j-2=A for mapping the value in a
            cout << ch << "  ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}