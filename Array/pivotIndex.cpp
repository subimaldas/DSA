Question: Find Pivot element in an Array

Time Complexity: o(log n)
    
    Approach: the pivot element is in 2nd line ,i.e the min value ;

CODE:
#include <iostream>

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
using namespace std;

int main()
{
    int even[6] = {3, 4, 5, 1, 2, 3};
    cout << "Pivot Index is " << getPivot(even, 6) << endl;
    return 0;
}
