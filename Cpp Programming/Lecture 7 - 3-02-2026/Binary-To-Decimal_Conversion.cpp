#include<iostream>
using namespace std;

int main(){
    int binary;
    cout<<"Enter Binary Digits: ";
    cin>>binary;

    int decimal=0, base = 1;
    while(binary>0){
        int x = binary%10;
        decimal = decimal + x * base;
        binary = binary/10;
        base*=2;
    }
    cout<<"The converted value is: "<<decimal;
}