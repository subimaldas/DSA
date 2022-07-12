Question: 1st and last occurance of a sorted array
Approach: Binary search lagao BC
1. if mid== Key , the store the value in a varable and move  to left , because we r searching for the 1st element.
 
    Time Complexity : O(log n) 
    Auxiliary Space : O(1) 
        
        
        
CODE:
    
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
            //To get the 1st occurance
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            //Move to the right part
            start = mid + 1;
        }
        else
        {
             //Move to the right part
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
             //To get the Last occurance
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
             //Move to the right part
            start = mid + 1;
        }
        else
        {
             //Move to the right part 
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
