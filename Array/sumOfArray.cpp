#include <iostream>

using namespace std;

int sumArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{

    
        int arr[100], n;
        // Taking the size of the array
        cin >> n;
        // Taking the array from the user
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "The sum of all the elements in the array is: " << sumArr(arr, n) << endl;
    

    return 0;
}