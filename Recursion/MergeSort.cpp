IMP: Fast among all other algorithms



#include<iostream>
using namespace std;

void merge(int *arr, int s , int e){
     
   int mid= s+(e-s)/2;   //This line can be removed by adding mid on the merge function
   
   int subArray1= mid-s+1;
   int subArray2= e-mid;
   
   
   
   //creating temporary array 
   int *firstArray=new int[subArray1];
   int *secondArray= new int[subArray2];
   
   
   //copy values to the temp array from the sub-arrays 1 &2
   int  mainArrayIndex= s;
   for(int i=0;i<subArray1;i++){
       firstArray[i]= arr[ mainArrayIndex++];
   }
   
    mainArrayIndex= mid+1;
   for(int i=0;i<subArray2;i++){
       secondArray[i]= arr[ mainArrayIndex++];
   }
   
   
   //merge 2  arrays back to 1 Array
   int index1=0;
   int index2=0;
   mainArrayIndex=s;
   
   while (index1 < subArray1 && index2 < subArray2){
       if(firstArray[index1] < secondArray[index2]){
           arr[mainArrayIndex++]= firstArray[index1++];
       }
       else{
           arr[mainArrayIndex++]= secondArray[index2++];
       }
   }
  
  // Copy the remaining elements of left[], if there are any
       while (index1<subArray1){
       arr[mainArrayIndex++]= firstArray[index1++];
   }
   
    // Copy the remaining elements of right[], if there are any
   while (index2<subArray2){
       arr[mainArrayIndex++]= secondArray[index2++];
   }
    
    
             
    //deleting the extra array to reduce space         
             delete[] firstArray;
             delete[] secondArray;
}



void mergeSort(int *arr, int s, int e){
    //base case 
    if(s>=e){
        return;
    }
    
    
    int mid= s+(e-s)/2;
    
    //sort the left part
    mergeSort(arr, s, mid);
     //sort the right part
    mergeSort(arr, mid+1, e);
     //merge both the sorted array
    merge(arr, s ,e);    
    
    
    
    
}
 
 
int main () {
  
   int arr[15] = { 2, 3, 12, 1, 0, 5, 24, 22, 1, 4, 69, 26, 14, 65 ,33};
  
   int n = 15;
  
   mergeSort (arr, 0, n - 1);
   
   for(int i=0;i<n;i++){
       cout<< arr[i]<< " ";
   }

   return 0;
}
