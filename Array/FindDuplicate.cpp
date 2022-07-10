Question: Find Duplicate from the array.
    
    
Approach 1: Simple sort the array and compare arr[i]==arr[i+1]

Approach 2: Using LinkedList cycle method (tortoise Method).
    a.Take two variable slow and fast move slow=1; fasr=2 
    b. When slow=fast stop , then move stop at 1st pos and move both by 1 to get the duplicate number.
    

Time complexity: O(N). 
Space complexity: O(1).
    
    



CODE:
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];       // Move slow by 1
        fast = nums[nums[fast]]; // Move fast by 2
    } while (slow != fast);
    fast = nums[0];
    while (slow != fast) //After getting the meeting position of slow and fast. Slow to starting positon and move both fast and slow by 1
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 3};
    cout << "The duplicate element is:" << findDuplicate(arr) << endl;
}
