//     1
//   2 2
// 3 3 3
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
        while (space<= n-i)
        {
            cout <<" "<< " ";
            space++;
        }
        //For printing number
        while (j <= i )
        {
            cout<<" " << i;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}