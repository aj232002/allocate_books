#include<iostream>
using namespace std;

// Function to check if the target is present in the array
bool isPresent(int arr[][3], int target, int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// Function to print the sum of each row
void printSum(int arr[][3], int row, int col) {
    cout << "Printing the sum of each row:" << endl;
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[3][3];

    // Input array elements
    cout << "Enter the elements of the 3x3 array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Input the target element to search
    cout << "Enter the element to search: " << endl;
    int target;
    cin >> target;

    // Check if the element is present
    if(isPresent(arr, target, 3, 3)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Print the sum of each row
    printSum(arr, 3, 3);

    return 0;
}
