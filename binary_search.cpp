#include<iostream>
using namespace std;


int binarySearch(int arr[],int key, int size){

    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start <= end){

        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;

        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){

    int even[6] = {2,4,6,8,9,10};
    int odd[5] = {3,5,7,9,11};

    // int index = binarySearch(even,9,6);
    int index = binarySearch(odd, 45 ,5);


    cout << "Index of 11 is " << index << endl;


}