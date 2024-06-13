// Selection Sort

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < n - 1; i++){
        int minIndex = 0;

        for (int j =  i + 1; j < n; j++){
            if(arr[i] < arr[minIndex])
            minIndex = j;

        }
        swap(arr[minIndex], arr[i]);
    }
};
