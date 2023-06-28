Question: Check whether the array is sorted or not using Recursion


#include <iostream>
using namespace std;


bool  isSorted( int arr[],int size){
    
    //base case 
    if( size==0 || size==1)
    return true;
   
     
  //R.c
  if (arr[0]>arr[1])
     return false;
     
    else{
     bool remainingPart= isSorted(arr+1, size-1);
     return remainingPart;
    }
}


int main()
{
    int arr[5]= {2,4,5,9,11};
    int size= 5;
    
    bool ans=isSorted(arr,size);
    if(ans){
       
        cout<< "Array is sorted"<< endl;
    }
        
        else {
         cout<< "Array is notsorted"<< endl;
    }
    return 0;
}
