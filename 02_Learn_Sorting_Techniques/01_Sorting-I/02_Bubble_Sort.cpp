#include <iostream>
using namespace std ;

void BubbleSort(int arr[],int n){
    for (int i = 0 ; i < n-1 ; i++){
        for (int j= 0; j < n-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    BubbleSort(arr,6);
    printArray(arr,6);


}