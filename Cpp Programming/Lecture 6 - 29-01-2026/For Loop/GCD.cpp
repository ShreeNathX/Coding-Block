#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    for(int i=2; i<=10; i++){
        if(a%i == 0 && b%i == 0){
            cout<<i<<" ";
        }
    }
}