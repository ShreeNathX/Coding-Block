//Q4. Find the Maximum of Two Numbers

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two number with space in between: ";
    cin>>a>>b;

    if (a>b){
        cout<<a<<" is greater.";
    }else{
        cout<<b<<" is greater.";
    }
    return 0;
}