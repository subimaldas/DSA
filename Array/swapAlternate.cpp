Question: swap alternate number


Time Complexity: O(N)
Space Complexity:O(1)

CODE:

#include <iostream>

using namespace std;
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n) //i+1 should be less then the size of array, nehi to array se bahar ajayega
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

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
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int odd[7] = {21, 22, 23, 24, 25, 26, 27};

    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 7);
    printArray(odd, 7);

    return 0;
}
