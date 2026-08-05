#include <iostream>
using namespace std ;

void Merge(int arr[], int st, int mid, int end) {
    int i = st;
    int j = mid + 1;
    int k = 0;

    int temp[end - st + 1];

  
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

   
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

   
    while (j <= end) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    
    for (int idx = 0; idx < k; idx++) {
        arr[st + idx] = temp[idx];
    }
}

void MergeSort(int arr[], int st, int end) {
    if (st >= end) {
        return;
    }

    int mid = (st + end) / 2;

    MergeSort(arr, st, mid);
    MergeSort(arr, mid + 1, end);

    Merge(arr, st, mid, end);
}


void printArray(int arr[],int n){
    for (int i = 0 ; i < n ; i++){
        cout << " "<< arr[i];
    }
}


int main (){
    int arr[6]={5,87,3,1,8,4};
    cout << "Array Elements before sorting : ";
    printArray(arr,6);
    cout << "\nArray Elements after sorting : ";
    MergeSort(arr,0,5);
    printArray(arr,6);


}