Question: Give the Sum of all the numbers in the array using recursion.

#include <iostream>
using namespace std;

int
getSum (int arr[], int size)
{

  //base case 
  if (size == 0)
    {
      return 0;
    }
  if (size == 1)
    {
      return arr[0];
    }


//Recursion Call
  int remainingPart = getSum (arr + 1, size - 1);
  int sum = arr[0] + remainingPart;
  return sum;
}


int main ()
{
  int arr[5] = { 32, 4, 5, 91, 11 };
  int size = 5;

  int sum = getSum (arr, size);

  cout << "Sum is " << sum << endl;
  return 0;
}
