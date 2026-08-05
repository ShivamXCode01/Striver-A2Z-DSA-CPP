#include <iostream>
using namespace std ;

void InsertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){

        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
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
   InsertionSort(arr,6);
    printArray(arr,6);


}