#include<iostream>
using namespace std;


int firstOcc(int arr[], int n, int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start)/2);
    int ans = -1;

    while( start <= end){

        if (arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if( k < arr[mid]){
            end = mid - 1;
        }
        mid = (start + (end - start)/2);
    }
    return ans;
}


int lastOcc(int arr[], int n, int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start)/2);
    int ans = -1;

    while( start <= end){

        if (arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if( k < arr[mid]){
            end = mid - 1;
        }
        mid = (start + (end - start)/2);
    }
    return ans;
}

int main(){
    
    int even[5] = {1,2,3,3,5};


    cout << "The index of first occurrence of 3 is " << firstOcc(even,5,3) << endl;
    cout << "The index of last occurrence of 3 is " << lastOcc(even,5,3) << endl;
    return 0;
}