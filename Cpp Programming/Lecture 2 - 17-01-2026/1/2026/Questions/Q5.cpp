//Q5. Find the Maximum of Three Numbers

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three number with space in between: ";
    cin>>a>>b>>c;

    if (a>b && a>c){
        cout<<a<<" is greater.";
    }else if(b>a && b>c){
        cout<<b<<" is greater.";
    }else{
        cout<<c<<" is greater.";
    }
    return 0;
}