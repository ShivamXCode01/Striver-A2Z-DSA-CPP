# include <iostream>
using namespace std ;

void printArray(int arr[],int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}

void reverseAnArray(int arr[],int n){
    int p1 = 0;
    int p2 = n-1;

    while(p1 < p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }



}


int main(){

   int arr[5]={4,21,1,1,2};
   cout << "Array before reverse : ";
   printArray(arr,5);

   cout << "\nArray after reverse : ";
   reverseAnArray(arr,5);
   printArray(arr,5);
   


}