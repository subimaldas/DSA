Approach: In each iteration the largest element will cum into the {RIGHT PLACE}



#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {
    //base case
    if( n == 0 || n==1 ){
        return;
  }
  //Solving 1 case: rest will be handled by recursion
    for(int i=0; i<n-1;i++){
        if(arr[i]> arr[i+1]){
               swap(arr[i],arr[i+1]);
            }
        }

  //RECURSIVE CALL
  sortArray(arr,n-1);// (n-1) as the last element got sorted in the 1st iteration
}

int main() {

   int arr[6]={2,72,3,5,4, 65};
   
   sortArray(arr,6);
   
   for(int i=0;i<6;i++){
       cout<<arr[i]<< " ";
   }

    return 0;
}
