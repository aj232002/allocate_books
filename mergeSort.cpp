#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = start + (end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrayIndex = start;
    for(int i =0; i <len1;i++){
        first[i] = arr[mainarrayIndex++];
    }
    mainarrayIndex = mid + 1;
    for(int i =0; i <len2;i++){
        second[i] = arr[mainarrayIndex++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = start;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainarrayIndex++ ] = first[index1++];
        }
        else{
            arr[mainarrayIndex++ ] = second[index2++];

        }
    }
    while(index1 < len1){   
        arr[mainarrayIndex++ ] = first[index1++];
    }
    while(index2 < len2){
        arr[mainarrayIndex++ ] = second[index2++];
    }
}
void mergeSort(int arr[], int start,int end){
    // base case
    if (start >= end){
        return ;
    }
    int mid = start + (end-start)/2;

    // left sort
    mergeSort(arr,start, mid );
    // right sort
    mergeSort(arr,mid+1,end);
    // merge
    merge(arr, start,end);
}
int main()
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort( arr,0,n-1);

    for (int i = 0;i < n;i++){
        cout << arr[i] << endl;
    }

}