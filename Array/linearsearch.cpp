#include <iostream>

using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[10] = {56, 4, 6, 77, 81, 0, 21, -32, 9, -10};
    // whether the element is present int hte given array or not??

    cout << "Enter the key value:" << endl;
    int key;
    cin >> key;
    bool found = search(arr1, 10, key);
    {
        if (found)
        {
            cout << "key is present" << endl;
        }
        else
        {
            cout << "key is absent" << endl;
        }
    }
    return 0;
}