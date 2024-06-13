#include<iostream>
using namespace std;

int ap(int n){
    int funct;
    funct = 3*n + 7;
    return funct;
}


int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    
    cout << "the value of AP is: " << ap(n) <<endl;

}