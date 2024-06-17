#include<iostream>
using namespace std;

bool checkPalidrome(string str,int i, int j){
    // base case
    if (i >j)
        return true;
    
    if(
        str[i] != str[j]){
            return false;
        
    }
    else{
        return checkPalidrome(str,i+1,j+1);
    }
}
int main()
{
    string name = "civic";
    cout << endl;
    bool isPalindrome = checkPalidrome(name, 0, name.length()-1);
    
    if(isPalindrome){
        cout << "Its a palindrome " << endl;
    }
    else{
        cout << "Its not" << endl;
    }
}