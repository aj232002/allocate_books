
// Character arrays


#include<iostream>
using namespace std;
int main()
{
    char ch[6] = "abcde";
    char *c = &ch[0];
    cout << &c << endl;
}