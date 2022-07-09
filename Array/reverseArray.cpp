Question: Reverse an arrray

Approach:
1. We keep two points, *start* at the beginning and *end* at the last.
2. Start swaping the start and end , and increse start by 1 nad decrease end by 1 until(start<=end) 

Time Complexity: O(n), single-pass involved.
Space Complexity: O(1) 


CODE:
#include <iostream>

using namespace std;

//Reverse Function
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

//Print Function
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {10, 11, 12, 13, 14};

    reverseArray(arr1, 6);
    reverseArray(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
    return 0;
}
