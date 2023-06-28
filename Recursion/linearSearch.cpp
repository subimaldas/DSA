Quesion: Linear search Element is present OR not


#include<iostream>
using namespace std;


  //To check how its actually works 
void print (int arr[], int n)
{
  cout << "Size of array is " << n << endl;

  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    } cout << endl;
}



bool linearSearch (int arr[], int size, int k)
{

  //To check how its actually works 
  print (arr, size);
  
  //base case
  if (size == 0)
    return false;


  //R.C
  if (arr[0] == k)
    {
      return true;
    }
  else
    {
      bool remainingPart = linearSearch (arr + 1, size - 1, k);
      return remainingPart;
    }
}

int main ()
{

  int arr[5] = { 3, 5, 1, 2, 6 };
  int size = 5;
  int key = 6;
  bool ans = linearSearch (arr, size, key);

  if (ans)
    {
      cout << "Present " << endl;
    }
  else
    {
      cout << "absent " << endl;
    }

  return 0;
}
