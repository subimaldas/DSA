// * * * *
//   * * *
//     * *
//       *
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
        int j = 1, space = 1;
        // For making space
        while (space < i)
        {
            cout <<" "<< " ";
            space++;
        }
        //For printing star
        while (j <= n - i + 1)
        {
            cout<<" " << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}