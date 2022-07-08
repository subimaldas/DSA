Question: To find the 2nd smallest and the largest element from the given arry.


Approach:

1.Find the smallest and largest element in the array in a single traversal
2.After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
3.Similarly, we would find the largest element which is just smaller than the largest element we just found
4.Indeed, this is our second smallest and second largest element.

Time Complexity: O(N), We do two linear traversals in our array

Space Complexity: O(1)




#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void getElements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
    }
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // For finding the smallest/largest element we have to traverse the whole array
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    // For finding the 2nd lagest/smallest element we again have to traverse
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
        second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
        second_large = arr[i];
    }

    cout << "The Second smallest Element is " << second_small << endl;

    cout << "The Second largest  Element is " << second_large << endl;
}
int main()
{
    int num[7] = {23, 34, 12, 2, 56, 87, 1};

    getElements(num, 7);
    return 0;
}