#include<iostream>
using namespace std;
int main(){
    int amount = 1570;
    int rs100,rs50,rs20,rs1;

    switch(1){
        case 1: 
        rs100 = amount / 100;
        amount = amount % 100;
        cout<<"rs100 ="<<rs100<<endl;

        case 2:
        rs50 = amount / 50;
        amount = amount % 50;
        cout<<"rs50 is ="<<rs50<<endl;

        case 3:
        rs20 = amount / 20;
        amount = amount % 20;
        cout<<"rs20 is ="<<rs20<<endl;

        case 4:
        rs1 = amount / 1;
        amount = amount % 1;
        cout<<"rs1 is ="<<rs1<<endl;

    }
}