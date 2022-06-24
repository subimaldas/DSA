#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2; // mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
       if (arr[mid] > key) //for going into left part  
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[10] = {10, 11, 12, 14, 16, 17, 18, 19, 22, 23};
    int odd[9] = {10, 11, 12, 14, 16, 17, 18, 22, 23};

    int evenIndex = binarySearch(even, 10, 12);
    cout << "The index of 12 is: " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 9, 22);
    cout << "The index of 22 is: " << oddIndex << endl;
    return 0;
}