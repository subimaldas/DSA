Approach : 1 Using Loop

Time Complexity: O(n).
Space Complexity: O(1).
   
 CODE:
#include <iostream>

using namespace std;

int sumArray(int arr[], int n)
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
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Sum of all the elments in the array is:" << sumArray(arr, 6) << endl;
    return 0;
}

Approach : 2 Using predefined function

Time Complexity: O(n).
Space Complexity: O(1).

    
CODE:    
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    cout << "The sum of the elements of the array is: ";
    // Using predefined function
    cout << accumulate(arr, arr + n, sum);
    return 0;
}
* /
