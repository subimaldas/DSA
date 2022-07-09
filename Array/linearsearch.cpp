Approach: 
1.We declare a variable *key* and starting comparing it every element in the array
2.IF found then return 1, either return 0.
    
Time Complexity: O(n).
Space Complexity: O(1).
    
    
CODE:

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
    // whether the element is present in the given array or not??

    cout << "Enter the key value:" << endl;
    int key;
    cin >> key;
    
    //Declaring a variable *found* to store search result
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
