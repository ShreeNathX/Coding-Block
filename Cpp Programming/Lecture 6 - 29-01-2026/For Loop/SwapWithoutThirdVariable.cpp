#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter two number with space in between them: ";
    cin>>a>>b;

    a = a+b-(b=a);

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
}