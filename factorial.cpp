#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;

    }    
    return fact;
}

int ncr(int n, int r){
    int num = factorial(n);
    int denom = factorial(n-r) * factorial(r);
    int ans = num / denom;
    return ans;


}

int main(){
    int n, r;
    cin >> n >> r;
    cout << "answer is " << ncr(n,r) <<  endl;

}