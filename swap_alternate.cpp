#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }cout << endl;
}
 

void swap_alternate(int arr[],int size){
    for (int i = 0; i < size; i += 2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int arr[5] = {4,7,3,9,7};


    swap_alternate(arr,5);
    printArray(arr,5);
    
    
 
}