#include <iostream>

using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[10] = {10, 34, 12, 14, 3, 3, 3, 19, 22, 23};
    cout << " First occ of 3 Index is " << firstOcc(even, 10, 3);
    cout << endl;
    cout << " Last  occ of 3 Index is " << lastOcc(even, 10, 3);
    return 0;
}

// For total number of Occurence== ( LastOcc- firstOcc)+1