#include <iostream>
using namespace std ;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int Min = i;

        for(int j = i + 1; j < n; j++){
            if(arr[Min] > arr[j]){
                Min = j;
            }
        }
        swap(arr[Min], arr[i]);
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
    selectionSort(arr,6);
    printArray(arr,6);


}