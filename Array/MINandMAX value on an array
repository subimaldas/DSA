Question: Find the largest and the smallest element of the array.

**Entering the size and element of the array manually**

Solution: Using of min and maximum variable

Approach: 
1.Create a maximum/min variable and initialize it with arr[0].
2.Use a for loop and compare it with other elements of the array
3.If any element is greater than the max value(less than the min value), update maximum/min value with the element’s value
4.Print the maximum/min variable.

Time Complexity: O(N)
Space Complexity: O(1)
    
    
CODE:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMax(int num[], int n)
{
    int maximum = num[0];

    for (int i = 0; i < n; i++)
    {
       
        maximum = max(maximum, num[i]);    // use of predefined function
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    // returning max value
    return maximum;
}

int getMin(int num[], int n)
{
    int min = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    // returning min value
    return min;
}

int main()
{
    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;

    int num[10];

    // Taking input in array
    cout << "Enter the values of array " << endl;
    for (int i = 0; i < size; i++)

    {
        cin >> num[i];
    }
    cout << "Maximum value is:" << getMax(num, size) << endl;

    cout << "Minimum value is:" << getMin(num, size) << endl;
    return 0;
}
