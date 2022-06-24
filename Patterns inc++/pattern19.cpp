//       *
//     * *
//   * * *
// * * * *
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

        // For printing space
        int space = 1;
        while (space <= n - i)
        {
            cout << " "<< " ";
            space++;
        }

        // For printing star
        int star = 1;
         while (star <= i)
        {
            cout << "*"  << " " ;
          
            star++;
        }
        cout << endl;
        i++;
    }

    return 0;
}