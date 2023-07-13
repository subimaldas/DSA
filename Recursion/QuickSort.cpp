Approach: Take the 1st element as a pivot , and place the pivot at its right index ,, 
          Partitioning the array and sort the array using recursion

code: 

#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}



void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioning
    int p = partition(arr, s, e);

    //Sorting the left part
    quickSort(arr, s, p-1);

    //sorting the right part
    quickSort(arr, p+1, e);

}

int main() {

    int arr[15] = {2,4,1,6,9 ,9,9,19,9,9,11,3,42,21,21};
    int n = 15;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
